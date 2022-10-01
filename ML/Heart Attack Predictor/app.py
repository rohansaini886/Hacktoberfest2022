from flask import Flask,request, url_for, redirect, render_template
import pickle
import numpy as np

app = Flask(__name__)


@app.route('/')
def hello_world():
    return render_template("forest.html")


@app.route('/predict', methods=['POST', 'GET'])
def predict():
    knnModel = pickle.load(open('knnModel.pkl', 'rb'))
    int_features = [int(x) for x in request.form.values()]
    final = [np.array(int_features)]
    knnPrediction = knnModel.predict(final)
    if knnPrediction[0] == 1:
        svrModel = pickle.load(open('svrModel.pkl', 'rb'))
        svrPrediction = svrModel.predict(final)

    if knnPrediction[0] == 1 and svrPrediction[0] >= 0.45:
        return render_template('forest.html', pred='You are at a risk of heart attack. We recommend you to visit a cardiologist ({}% risk)'.format(int(svrPrediction[0]*100)))
    elif knnPrediction[0] == 1:
        return render_template('forest.html', pred='You are at a risk of heart attack. We recommend you to visit a cardiologist')
    else:
        return render_template('forest.html', pred='You are not at a risk of heart attack.')


if __name__ == '__main__':
    app.run(debug=True)

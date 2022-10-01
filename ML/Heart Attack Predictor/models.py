#!C:\Users\Lenovo\AppData\Local\Programs\Python\Python37-32\python.exe

import pandas as pd
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
import warnings
import pickle
from sklearn.svm import SVR

warnings.filterwarnings("ignore")

dataset = pd.read_csv('cardio_train_new_upload_1.csv')
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, -1].values
y = y.astype('int')
X = X.astype('int')
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.4, random_state=0)

#KNN classification
knn = KNeighborsClassifier(n_neighbors=33)
knn.fit(X_train, y_train)
knn.fit(X, y)

#Support Vector regression
regressor = SVR(kernel = 'rbf')
regressor.fit(X_train, y_train)

pickle.dump(knn, open('knnModel.pkl', 'wb'))
pickle.dump(regressor, open('svrModel.pkl', 'wb'))
knnModel = pickle.load(open('knnModel.pkl', 'rb'))
svrModel = pickle.load(open('svrModel.pkl', 'rb'))
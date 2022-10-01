class Node:
	def __init__(self, data):
		self.key = data
		self.left = None
		self.right = None

def inorder(root):
	if root != None:
		inorder(root.left)
		print(root.key, end = " ")
		inorder(root.right)
    
def reversePath(node, key, q1):
	if node == None:
		return
	if node.key == key:
		q1.insert(0, node.key)
		node.key = q1[-1]
		q1.pop()
		return
	elif key < node.key:
		q1.insert(0, node.key)
		reversePath(node.left, key, q1)
		node.key = q1[-1]
		q1.pop()
	elif (key > node.key):
		q1.insert(0, node.key)
		reversePath(node.right, key, q1)
		node.key = q1[-1]
		q1.pop()
	return

def insert(node, key):
	if node == None:
		return Node(key)
	if key < node.key:
		node.left = insert(node.left, key)
	elif key > node.key:
		node.right = insert(node.right, key)
	return node
	
if __name__ == '__main__':
	root = None
	q1 = []
	k = 80;
	root = insert(root, 50)
	insert(root, 30)
	insert(root, 20)
	insert(root, 40)
	insert(root, 70)
	insert(root, 60)
	insert(root, 80)

	print("Before Reverse :")
	inorder(root)
	reversePath(root, k, q1)
	print()
	print("After Reverse :")
	inorder(root)	

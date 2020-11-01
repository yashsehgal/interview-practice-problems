import numpy as np
from matplotlib import pyplot as plt


def sigmoid(x):
  return (1 / (1 + np.exp(-x)))


def show_data_on_graph(x, y):
  plt.plot(x, y)
  plt.show()

def generatePredictionData(value):
  data = []
  computed_data = []
  
  for count in range(-value, value):
    data.append(count)
    computed_data.append(sigmoid(count))
    print("saving " + str(count) + " data...")
    
  show_data_on_graph(data, computed_data)


if __name__ == '__main__':
  generatePredictionData(100)
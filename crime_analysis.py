import numpy as np
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

# Sample crime rate data (latitude, longitude, crime rate)
crime_data = np.array([
    [40.7128, -74.0060, 8.5],
    [34.0522, -118.2437, 6.2],
    [41.8781, -87.6298, 9.8],
    # Add more data points...
])

# Feature scaling (normalization)
crime_data_scaled = (crime_data - np.min(crime_data, axis=0)) / (np.max(crime_data, axis=0) - np.min(crime_data, axis=0))

# Determine the number of clusters (k)
k = 3

# Perform k-means clustering
kmeans = KMeans(n_clusters=k, random_state=42)
kmeans.fit(crime_data_scaled)

# Retrieve cluster labels and cluster centers
labels = kmeans.labels_
centers = kmeans.cluster_centers_

# Visualize the clusters
plt.scatter(crime_data[:, 0], crime_data[:, 1], c=labels)
plt.scatter(centers[:, 0], centers[:, 1], c='red', marker='x')
plt.xlabel('Latitude')
plt.ylabel('Longitude')
plt.title('Crime Rate Clustering')
plt.show()

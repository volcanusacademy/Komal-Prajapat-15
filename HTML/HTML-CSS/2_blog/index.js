const { MongoClient } = require('mongodb');

// Connection URI for your MongoDB database
const uri = 'mongodb://localhost:27017/your-database-name';

// Create a MongoClient
const client = new MongoClient(uri);

async function connectToMongoDB() {
  try {
    // Connect to the MongoDB server
    await client.connect();

    console.log('Connected to MongoDB');

    // Perform database operations here

  } catch (error) {
    console.error('Error connecting to MongoDB:', error);
  } finally {
    // Close the MongoDB client
    await client.close();
  }
}

// Call the function to connect to MongoDB
connectToMongoDB();

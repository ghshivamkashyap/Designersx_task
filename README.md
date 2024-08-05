# DesignersX Task

Hi Sir,

I have completed the technical tasks assigned for the DesignersX selection process. You can find the solutions in the following GitHub repository and the live backend API link:

## Repository and Live API

- **GitHub Repository:** [DesignersX Task](https://github.com/ghshivamkashyap/Designersx_task)
- **Live API:** [https://designersx-task-server.onrender.com/](https://designersx-task-server.onrender.com/)

## Endpoints

### POST /addbook - Create a book
**Example:** [https://designersx-task-server.onrender.com/addbook](https://designersx-task-server.onrender.com/addbook)

**Request Body:**
```json
{
    "title": "shivam book 3",
    "author": "shivam",
    "year": 2001
}
```

### GET /books - Get all books
**Example:** [https://designersx-task-server.onrender.com/books](https://designersx-task-server.onrender.com/books)

### GET /books/:id - Get a book by ID
**Example:** [https://designersx-task-server.onrender.com/books/2](https://designersx-task-server.onrender.com/books/2)

### PUT /updatebook/:id - Update a book by ID
**Example:** [https://designersx-task-server.onrender.com/updatebook/1](https://designersx-task-server.onrender.com/updatebook/1)

**Request Body:**
```json
{
    "title": "updated book by sahivam",
    "author": "new book name b2",
    "year": 2025
}
```

### DELETE /deletebookbyid/:id - Delete a book by ID
**Example:** [https://designersx-task-server.onrender.com/deletebookbyid/1](https://designersx-task-server.onrender.com/deletebookbyid/1)

## Installation

To install and run this project locally, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/ghshivamkashyap/Designersx_task.git
    ```

2. Navigate to the project directory:
    ```bash
    cd Designersx_task
    ```

3. Install the dependencies:
    ```bash
    npm install
    ```

4. Start the server:
    ```bash
    npm start
    ```

The server will start on `http://localhost:3000`. You can use tools like Postman to test the endpoints locally.

Please let me know if you have any questions or need further information.

Thank you for the opportunity.

Best regards,  
Shivam Kashyap


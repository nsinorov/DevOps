// Hardcoded credentials
const validUsername = "admin";
const validPassword = "1234";

// Function to handle login
function login(username, password) {
  if (username === validUsername && password === validPassword) {
    console.log("Login successful!");
    return true;
  } else {
    console.log("Invalid username or password!");
    return false;
  }
}

// Example usage:
const userInput = prompt("Enter your username:");
const passInput = prompt("Enter your password:");

if (login(userInput, passInput)) {
  alert("Welcome, " + userInput + "!");
} else {
  alert("Login failed. Try again.");
}

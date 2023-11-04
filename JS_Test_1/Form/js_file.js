document.addEventListener("DOMContentLoaded", function() {
    const form = document.getElementById("registrationForm");
    const errorMessages = document.getElementById("errorMessages");

    form.addEventListener("submit", function(event) {
        event.preventDefault();
        errorMessages.innerHTML = "";

        const fullName = document.getElementById("fullName").value;
        const email = document.getElementById("email").value;
        const password = document.getElementById("password").value;

        if (fullName === "") {
            errorMessages.innerHTML += "Please enter your full name.<br>";
        }

        if (!isValidEmail(email)) {
            errorMessages.innerHTML += "Please enter a valid email address.<br>";
        }

        if (password.length < 6) {
            errorMessages.innerHTML += "Password must be at least 6 characters long.<br>";
        }

        if (errorMessages.innerHTML === "") {
            alert("Form submitted successfully!");
            // You can submit the form to a server or perform other actions here.
        }
    });

    function isValidEmail(email) {
        // This is a basic email validation function. You can use a more advanced one in production.
        const emailPattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/;
        return emailPattern.test(email);
    }
});

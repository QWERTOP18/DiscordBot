try {
    throw new Error("An error occurred");
    } catch (error) {
    console.log(error.message);
    }
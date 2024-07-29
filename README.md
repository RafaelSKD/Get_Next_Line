
🎉 Welcome to GetNextLine! 🎉

Ever dreamt of reading a file line by line, but with pizzazz? GetNextLine 2.0 is here to make your wildest file reading fantasies come true! 🌟

📝 What is this sorcery?
GetNextLine is a C library that gives you the power to read lines from a file like a boss. It's like fgets(), but cooler, slicker, and with 100% more lines read. Say goodbye to boring file reading and hello to get_next_line!

🚀 Why use GetNextLine?
Simplicity: One function to rule them all.
Efficiency: Reads lines efficiently so you don't have to.
Flexibility: Configure your buffer size for ultimate control.
Memorable: Make your code unforgettable with our unique memory management (no leaks guaranteed!).

🎉 Features
Line by Line Reading: Read any file, one line at a time. It's like magic, but real.
Customizable Buffer Size: Define your own BUFFER_SIZE to suit your needs. Big or small, we've got you covered.
No Memory Leaks: We take memory management seriously. Valgrind tested and approved. ✅

📦 Installation
Clone the repo and get started right away:

🛠️ Usage
Include get_next_line.h in your project, and you're ready to roll!

#include "get_next_line.h"

int main(void)
{
    int fd = open("yourfile.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    free_static_txt();  // Remember to free the static memory when you're done
    close(fd);
    return 0;
}

🌟 Show Your Support
Give a ⭐️ if this project helped you read files like never before!

📞 Contact
Got questions? Bugs? Want to say hello? Hit us up at:

Email: rcosta.skd@gmail.com
Linkedin: linkedin.com/in/rafaelskd
🚀 Happy Coding!
May your files be ever readable and your bugs be few. Keep coding, keep smiling! 😄

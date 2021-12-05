/** Create strings as Primitive Data-Type STRING */
const s1 = "Hello";
console.log(s1.toUpperCase());
console.log(typeof s1); // By default: 's1' is a Primitive Data type

/**
 * 's1.toUpperCase()' Looks like an OBJECT with a FUNCTION
 * Even though s1 is not an object But a Primitive Data Type
 * Behind the scenes 's1.toUpperCase()' is working like function-on-an-object
 */

/** Create strings like OBJECTS */
const s2 = new String("Hello");
console.log(typeof s2);

/** Object Literals */
const book1 = {
  title: "Book One",
  author: "John Doe",
  year: "2013",
  getSummary: function () {
    return `${this.title} was written by ${this.author} in the year ${this.year}`;
  },
};
console.log(book1.getSummary());

const book2 = {
  title: "Book Two",
  author: "Jane Doe",
  year: "2016",
  getSummary: function () {
    return `${this.title} was written by ${this.author} in the year ${this.year}`;
  },
};
console.log(book2.getSummary());
console.log(Object.keys(book2));
console.log(Object.values(book2));

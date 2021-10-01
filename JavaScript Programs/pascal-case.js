/**
 * Convert a string to Pascal Case (removing non alphabetic characters).
 *
 * @example
 * 'hello_world'.toPascalCase() // Will return `HelloWorld`.
 * 'fOO BAR'.toPascalCase()     // Will return `FooBar`.
 *
 * @returns {string}
 *   The Pascal Cased string.
 */

function convertToPascalCase(str){
    return str.match(/[a-z]+/gi).map(function (word) {
      return word.charAt(0).toUpperCase() + word.substr(1).toLowerCase()
    })
    .join('');
 }
console.log(convertToPascalCase("hello_world"));
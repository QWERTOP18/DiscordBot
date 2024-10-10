const obj = {
    value: 318,
    getValue: function() {
        return () => this.value;
    }
};
const getValue = obj.getValue();
console.log(getValue());
const fetchData1 = () => Promise.resolve('Data 1');
const fetchData2 = () => Promise.resolve('Data 2');

Promise.all([fetchData1(), fetchData2()]).then(data => console.log(data));
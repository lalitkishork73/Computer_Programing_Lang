console.log(progress);
let counts = setInterval(updated);
let upto = 0;
function updated() {
    let progress = document.getElementsByTagName("progress");
    counts.innerHTML = ++upto;
    if (upto === 1000) {
        clearInterval(counts);
    }
    progress.setAttribute("value","counts ");
}
function map<OriginalType, ReturnedType>(arr: OriginalType[], fun: (value: OriginalType) => ReturnedType): ReturnedType[] {
    let arrCopy: ReturnedType[] = []
    for (const element of arr) {
        arrCopy.push(fun(element))
    }
    return arrCopy
}

console.log(map<number, string>([1, 1, 1, 11, 1, 1], (v) => String(v)));

pragma experimental SMTChecker;

contract C {
	bytes32 bhash;
	address coin;
	uint dif;
	uint glimit;
	uint number;
	uint tstamp;
	bytes mdata;
	address sender;
	bytes4 sig;
	uint value;
	uint gprice;
	address origin;

	function f() public payable {
		bhash = blockhash(12);
		coin = block.coinbase;
		dif = block.difficulty;
		glimit = block.gaslimit;
		number = block.number;
		tstamp = block.timestamp;
		mdata = msg.data;
		sender = msg.sender;
		sig = msg.sig;
		value = msg.value;
		gprice = tx.gasprice;
		origin = tx.origin;

		fi();

		assert(bhash == blockhash(122));
		assert(coin != block.coinbase);
		assert(dif != block.difficulty);
		assert(glimit != block.gaslimit);
		assert(number != block.number);
		assert(tstamp != block.timestamp);
		assert(mdata.length != msg.data.length);
		assert(sender != msg.sender);
		assert(sig != msg.sig);
		assert(value != msg.value);
		assert(gprice != tx.gasprice);
		assert(origin != tx.origin);
	}

	function fi() internal view {
		assert(bhash == blockhash(122));
		assert(coin != block.coinbase);
		assert(dif != block.difficulty);
		assert(glimit != block.gaslimit);
		assert(number != block.number);
		assert(tstamp != block.timestamp);
		assert(mdata.length != msg.data.length);
		assert(sender != msg.sender);
		assert(sig != msg.sig);
		assert(value != msg.value);
		assert(gprice != tx.gasprice);
		assert(origin != tx.origin);
	}
}
// ----
// Warning 6328: (545-576): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 6, glimit = 7, number = 8, tstamp = 9, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 11, gprice = 13, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (580-610): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 5, glimit = 6, number = 7, tstamp = 11, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 8, gprice = 9, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (614-645): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7718, coin = 8855, dif = 5, glimit = 10, number = 11, tstamp = 6, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 13, gprice = 8, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (649-681): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7718, coin = 8855, dif = 7, glimit = 8, number = 9, tstamp = 10, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 13, gprice = 5, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (685-715): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7718, coin = 8855, dif = 6, glimit = 11, number = 13, tstamp = 14, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 8, gprice = 9, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (719-752): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 8, glimit = 9, number = 5, tstamp = 10, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 13, gprice = 14, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (756-795): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7718, coin = 8855, dif = 9, glimit = 5, number = 10, tstamp = 11, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 14, gprice = 6, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (799-827): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 10, glimit = 5, number = 6, tstamp = 7, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 13, gprice = 14, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (831-853): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 5, glimit = 7, number = 8, tstamp = 10, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 13, gprice = 14, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (857-883): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 6, glimit = 7, number = 11, tstamp = 13, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 14, gprice = 8, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (887-916): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 6, glimit = 10, number = 13, tstamp = 7, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 8, gprice = 14, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (920-947): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28957, coin = 11797, dif = 10, glimit = 5, number = 11, tstamp = 6, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 7, gprice = 8, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (986-1017): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 9, glimit = 10, number = 11, tstamp = 6, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 14, gprice = 7, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1021-1051): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 9, glimit = 5, number = 6, tstamp = 7, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 11, gprice = 13, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1055-1086): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 5, glimit = 9, number = 10, tstamp = 11, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 13, gprice = 7, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1090-1122): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 5, glimit = 6, number = 10, tstamp = 7, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 8, gprice = 13, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1126-1156): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 8, glimit = 9, number = 10, tstamp = 5, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 11, gprice = 13, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1160-1193): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 10, glimit = 11, number = 13, tstamp = 5, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 7, gprice = 8, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1197-1236): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 5, glimit = 9, number = 10, tstamp = 6, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 11, gprice = 13, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1240-1268): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 6, glimit = 7, number = 8, tstamp = 9, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 13, gprice = 10, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1272-1294): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 8, glimit = 9, number = 10, tstamp = 11, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 5, gprice = 6, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1298-1324): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 9, glimit = 10, number = 11, tstamp = 5, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 6, gprice = 7, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1328-1357): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 28958, coin = 11797, dif = 8, glimit = 9, number = 6, tstamp = 10, mdata = [38, 18, 31, 240], sender = 8855, sig = 638722032, value = 11, gprice = 13, origin = 2437\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()
// Warning 6328: (1361-1388): CHC: Assertion violation happens here.\nCounterexample:\nbhash = 7719, coin = 8855, dif = 10, glimit = 5, number = 6, tstamp = 7, mdata = [38, 18, 31, 240], sender = 2437, sig = 638722032, value = 13, gprice = 8, origin = 21238\n\n\n\nTransaction trace:\nconstructor()\nState: bhash = 0, coin = 0, dif = 0, glimit = 0, number = 0, tstamp = 0, mdata = [], sender = 0, sig = 0, value = 0, gprice = 0, origin = 0\nf()

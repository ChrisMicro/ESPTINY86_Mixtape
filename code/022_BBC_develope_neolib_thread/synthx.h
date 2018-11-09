#ifndef SYNTHTEST_H
#define SYNTHTEST_H
#include "Synth.h"
#include "Modules.h"


class SynthTest : public Synth
{
    public:
    ModuleConstant param[8];

    SynthTest()
    {
    
        //Define Node Objects
  ModuleWavetableOsc *moduleWavetableOsc_1 = new ModuleWavetableOsc();

  moduleWavetableOsc_1->frequency_input= &param[0];
  moduleWavetableOsc_1->wavetable_input= &param[1];


  this->last_module = moduleWavetableOsc_1;
        
    }
};
#endif // SYNTHTEST_H    


/* 

This is espnode86 stuff do not edit

--BEGINESPNODEPATCH--
djIuMS4xCm5ldHdvcmsvYWRkLXBhdGNoIHNhZDQgcm9vdApwYXRjaC9vcGVuIHNhZDQKcGF0Y2gvYWRkLW5vZGUgc2FkNCBra3Y1IGVzcG5vZGUvbm9kZWxpc3QgRXNwbm9kZSUyMFBhbGV0dGUKbm9kZS90dXJuLW9uIGtrdjUKcGF0Y2gvYWRkLW5vZGUgc2FkNCBs
ZWIxIGlucHV0L211bHRpcGxleGVyIE11bHRpcGxleGVyCm5vZGUvdHVybi1vbiBsZWIxCm5vZGUvYWRkLW91dGxldCBsZWIxIGJqbXcgZXNwbm9kZS9zdHJpbmcgUG90MSBQb3QxCm5vZGUvYWRkLW91dGxldCBsZWIxIDhpNWQgZXNwbm9kZS9zdHJpbmcgUG90MiBQ
b3QyCm5vZGUvYWRkLW91dGxldCBsZWIxIDVnaDEgZXNwbm9kZS9zdHJpbmcgUG90MyBQb3QzCm5vZGUvYWRkLW91dGxldCBsZWIxIG5leW8gZXNwbm9kZS9zdHJpbmcgUG90NCBQb3Q0Cm5vZGUvYWRkLW91dGxldCBsZWIxIDZsaGMgZXNwbm9kZS9zdHJpbmcgUG90
NSBQb3Q1Cm5vZGUvYWRkLW91dGxldCBsZWIxIDA1bnEgZXNwbm9kZS9zdHJpbmcgUG90NiBQb3Q2Cm5vZGUvYWRkLW91dGxldCBsZWIxIDFib3MgZXNwbm9kZS9zdHJpbmcgUG90NyBQb3Q3Cm5vZGUvYWRkLW91dGxldCBsZWIxIHpsbDIgZXNwbm9kZS9zdHJpbmcg
UG90OCBQb3Q4CnBhdGNoL2FkZC1ub2RlIHNhZDQgYmJnNSB3YXZlL29zY2lsbGF0b3IgT3NjaWxsYXRvcgpub2RlL3R1cm4tb24gYmJnNQpub2RlL2FkZC1pbmxldCBiYmc1IHVneHUgZXNwbm9kZS9zdHJpbmcgZnJlcXVlbmN5X2lucHV0IGZyZXF1ZW5jeV9pbnB1
dApub2RlL2FkZC1pbmxldCBiYmc1IHZ2d3EgZXNwbm9kZS9zdHJpbmcgd2F2ZXRhYmxlX2lucHV0IHdhdmV0YWJsZV9pbnB1dApub2RlL2FkZC1vdXRsZXQgYmJnNSBtYmQzIGVzcG5vZGUvc3RyaW5nIE91dCBPdXQKcGF0Y2gvYWRkLW5vZGUgc2FkNCA4N2NjIG91
dHB1dC9kYWMgQXVkaW8lMjBEQUMKbm9kZS90dXJuLW9uIDg3Y2MKbm9kZS9hZGQtaW5sZXQgODdjYyBzbmM5IGVzcG5vZGUvc3RyaW5nIGF1ZGlvX2lucHV0IGF1ZGlvX2lucHV0Cm5vZGUvbW92ZSBra3Y1IDMwIDIwCm5vZGUvbW92ZSBsZWIxIDM3OCA2OApub2Rl
L21vdmUgYmJnNSA2OTUgNzIKbm9kZS9tb3ZlIDg3Y2MgOTQ5IDc4Cm91dGxldC9jb25uZWN0IGJqbXcgdWd4dSB4dTEyCm91dGxldC9jb25uZWN0IDhpNWQgdnZ3cSBhdDcxCm91dGxldC9jb25uZWN0IG1iZDMgc25jOSBidGNjCm5vZGUvdXBkYXRlLWlubGV0IGJi
ZzUgdWd4dSBmcmVxdWVuY3lfaW5wdXQgMApub2RlL3VwZGF0ZS1pbmxldCBiYmc1IHZ2d3Egd2F2ZXRhYmxlX2lucHV0IDAKbm9kZS91cGRhdGUtaW5sZXQgODdjYyBzbmM5IGF1ZGlvX2lucHV0IDA=
--ENDESPNODEPATCH--

*/


// automatically generated by the FlatBuffers compiler, do not modify

package schemas

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

type SSBEntry struct {
	_tab flatbuffers.Table
}

func GetRootAsSSBEntry(buf []byte, offset flatbuffers.UOffsetT) *SSBEntry {
	n := flatbuffers.GetUOffsetT(buf[offset:])
	x := &SSBEntry{}
	x.Init(buf, n+offset)
	return x
}

func (rcv *SSBEntry) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *SSBEntry) Table() flatbuffers.Table {
	return rcv._tab
}

func (rcv *SSBEntry) Symbol(obj *Symbol) *Symbol {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(4))
	if o != 0 {
		x := rcv._tab.Indirect(o + rcv._tab.Pos)
		if obj == nil {
			obj = new(Symbol)
		}
		obj.Init(rcv._tab.Bytes, x)
		return obj
	}
	return nil
}

func (rcv *SSBEntry) RawSym() []byte {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(6))
	if o != 0 {
		return rcv._tab.ByteVector(o + rcv._tab.Pos)
	}
	return nil
}

func (rcv *SSBEntry) States(obj *SecondState, j int) bool {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(8))
	if o != 0 {
		x := rcv._tab.Vector(o)
		x += flatbuffers.UOffsetT(j) * 44
		obj.Init(rcv._tab.Bytes, x)
		return true
	}
	return false
}

func (rcv *SSBEntry) StatesLength() int {
	o := flatbuffers.UOffsetT(rcv._tab.Offset(8))
	if o != 0 {
		return rcv._tab.VectorLen(o)
	}
	return 0
}

func SSBEntryStart(builder *flatbuffers.Builder) {
	builder.StartObject(3)
}
func SSBEntryAddSymbol(builder *flatbuffers.Builder, symbol flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(0, flatbuffers.UOffsetT(symbol), 0)
}
func SSBEntryAddRawSym(builder *flatbuffers.Builder, rawSym flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(1, flatbuffers.UOffsetT(rawSym), 0)
}
func SSBEntryAddStates(builder *flatbuffers.Builder, states flatbuffers.UOffsetT) {
	builder.PrependUOffsetTSlot(2, flatbuffers.UOffsetT(states), 0)
}
func SSBEntryStartStatesVector(builder *flatbuffers.Builder, numElems int) flatbuffers.UOffsetT {
	return builder.StartVector(44, numElems, 4)
}
func SSBEntryEnd(builder *flatbuffers.Builder) flatbuffers.UOffsetT {
	return builder.EndObject()
}

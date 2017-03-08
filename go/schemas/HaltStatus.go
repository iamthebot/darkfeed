// automatically generated by the FlatBuffers compiler, do not modify

package schemas

const (
	///< Symbol is not currently halted
	HaltStatusnone = 0
	///< Symbol was halted and is now resuming
	HaltStatusresume = 1
	///< Symbol is delayed at opening
	HaltStatusdelay = 2
	///< Symbol is currently halted
	HaltStatushalted = 3
	///< Symbol is halted at open and will not trade during this session. Further quotations may not be issued.
	HaltStatusno_open_resume = 4
)

var EnumNamesHaltStatus = map[int]string{
	HaltStatusnone:"none",
	HaltStatusresume:"resume",
	HaltStatusdelay:"delay",
	HaltStatushalted:"halted",
	HaltStatusno_open_resume:"no_open_resume",
}

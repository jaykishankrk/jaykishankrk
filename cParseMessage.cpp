#include <cParseMessage.h>
// **************************************************************************
// Note: Default Constructor
// **************************************************************************
// Name            Date                   Description
// --------------------------------------------------------------------------
// vndrispb       07/24/12            Created.
//
// **************************************************************************
cParseMessage::cParseMessage(const int useCaseVal ) : m_rc(0),
                                                                      mainHdrLen(8),
                                                                      constZero(0),
                                                                      constOne(1),
                                                                      constTwo(2),
                                                                      constThree(3),
                                                                      constFour(4),
                                                                      constMAXBUFVal(INT_MAX),
                                                                      startDelimeterStr("|"),
                                                                      endDelimeterStr("|"),
                                                                      strEOL1("\r"),
                                                                      strEOL2("\n"),
                                                                      constsubSegHdrInitVal("0000"),
                                                                      constmainHdrInitVal("00000000"),
                                                                      constEmptyStr(""),
                                                                      NULL_TERMINATOR('\0'),
                                                                      strConstMessageDescrpCde("~~MD"),
                                                                      strConstMessageBodyCde("~~MB"),
                                                                      strConstOrdOprMRCde("~~MR"),
                                                                      strConstOrdOprMXCde("~~MX"),
                                                                      strConstOrdOprOSCde("~~OS"),
                                                                      strConstOrdOprOVCde("~~OV"),
                                                                      strConstOrdOprODCde("~~OD"),
                                                                      strConstOrdOprORCde("~~OR"),
                                                                      strConstOrdOprSRCde("~~SR"),

/*
** DO NOT EDIT THIS FILE !!!
** It was generated automatically by:
**
**   User: jan
**   Host: caesar
**   Date: 2015-03-18 16:20:01
**   Prog: ./mktuple
**
** Purpose:
**   Emulating variadic templates by generating appropriate
**   specializations and overloads.
*/
#ifndef DOXYGEN
template<typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,typename>
friend class OFtuple;
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator==(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator!=(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator<(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator>(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator<=(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
template<typename U0,typename U1,typename U2,typename U3,typename U4,typename U5,typename U6,typename U7,typename U8,typename U9,typename U10,typename U11,typename U12,typename U13,typename U14,typename U15,typename U16,typename U17,typename U18,typename U19,typename U20,typename U21,typename U22,typename U23,typename U24,typename U25,typename U26,typename U27,typename U28,typename U29,typename U30,typename U31,typename U32,typename U33,typename U34,typename U35,typename U36,typename U37,typename U38,typename U39,typename U40,typename U41,typename U42,typename U43,typename U44,typename U45,typename U46,typename U47,typename U48,typename U49,typename V0,typename V1,typename V2,typename V3,typename V4,typename V5,typename V6,typename V7,typename V8,typename V9,typename V10,typename V11,typename V12,typename V13,typename V14,typename V15,typename V16,typename V17,typename V18,typename V19,typename V20,typename V21,typename V22,typename V23,typename V24,typename V25,typename V26,typename V27,typename V28,typename V29,typename V30,typename V31,typename V32,typename V33,typename V34,typename V35,typename V36,typename V37,typename V38,typename V39,typename V40,typename V41,typename V42,typename V43,typename V44,typename V45,typename V46,typename V47,typename V48,typename V49>
friend OFBool operator>=(const OFtuple<U0,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,U11,U12,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,U23,U24,U25,U26,U27,U28,U29,U30,U31,U32,U33,U34,U35,U36,U37,U38,U39,U40,U41,U42,U43,U44,U45,U46,U47,U48,U49>&,const OFtuple<V0,V1,V2,V3,V4,V5,V6,V7,V8,V9,V10,V11,V12,V13,V14,V15,V16,V17,V18,V19,V20,V21,V22,V23,V24,V25,V26,V27,V28,V29,V30,V31,V32,V33,V34,V35,V36,V37,V38,V39,V40,V41,V42,V43,V44,V45,V46,V47,V48,V49>&);
#endif // DOXYGEN

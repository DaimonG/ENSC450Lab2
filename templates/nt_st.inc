.options brief
********************************************************************************
* This Program is the Confidential and Proprietary product
* of VLSI Design Laboratory, Inc.  Any unauthorized use,
* reproduction or transfer of this program is strictly
* prohibited.  Copyright (c)1997 by VLSI Design Laboratory,
* Inc.  All Rights Reserved
********************************************************************************
* Title      : nt.inc
* Library    : macros
* Purpose    : n-channel device with non shared drain/source
* Limitation : none.
* Note       : none.
********************************************************************************
* Modification History YY.MM.DD
*	99.05.03: rfh
*   97.10.17 : Update for cmosp35 - SAE.
*   97.02.20 : Initial Version P.H. (based on macros1)
********************************************************************************
* single transistor
* assume w-transistor > Abx, and as many cuts as will fit.
.macro nt_st d g s b
+ l=Lm# w=Wm# nc=1
+ ad='w*(CGce#+Abx2#)' as=ad pd='2*(w+CGce#+Abx2#)' ps=pd
+ nrd='(CGsp#+Cfld#)/w' nrs=nrd rdc='Ndcr#/nc' rsc=rdc
Mn d g s b nch L=l W=w AD=ad AS=as PD=pd PS=ps NRD=nrd NRS=nrs RDC=rdc RSC=rsc
.eom

********************************************************************************
.options brief=1

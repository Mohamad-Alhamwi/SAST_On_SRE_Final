
void FUN_0010482a(void)

{
  return;
}




long FUN_001049e6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104b92(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104bf6(param_2);
                    /* try { // try from 00104a55 to 00104ae7 has its CatchHandler @ 00104b13 */
    uVar2 = FUN_001049e6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104c0c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104b92(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104bf6(local_38);
      uVar2 = FUN_001049e6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104c0c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102530();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




void FUN_001034ee(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfc(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00104387(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104db8("Calling good()...");
  FUN_00104372();
  FUN_00104db8("Finished good()");
  FUN_00104db8("Calling bad()...");
  FUN_00103ed3();
  FUN_00104db8("Finished bad()");
  return 0;
}




undefined8 FUN_001029ba(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_0010455a(long param_1)

{
  FUN_00104680(param_1);
  FUN_001046a0(param_1);
  FUN_00104446(param_1 + 8);
  return;
}




void FUN_00104db8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00104c6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103518(param_1);
  uVar2 = FUN_00104c5c(param_2);
  FUN_00104cba(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00102daa(undefined8 param_1)

{
  return param_1;
}




void FUN_00104f3a(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001045f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010472a(param_1,param_2);
  lVar1 = FUN_0010479a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001047b0(param_1);
                    /* try { // try from 0010464f to 00104653 has its CatchHandler @ 00104659 */
    uVar3 = FUN_001047c6(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104dde(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001044d0(undefined8 param_1)

{
  FUN_0010455a(param_1);
  return;
}




void FUN_001045b6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010337e(param_1);
  FUN_001046c0(param_1,uVar1);
  FUN_001044b0(param_1);
  return;
}




void FUN_0010472a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104839(param_1,param_2);
  FUN_001048b4(param_1,param_2);
  FUN_00104446(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104cba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010281d(0x30,param_2);
  uVar1 = FUN_00104c5c(param_3);
  uVar2 = FUN_00102cda(param_2);
  uVar3 = FUN_00103a9a(param_1);
  FUN_00104d28(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103bac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d89(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b4a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104e8e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001039de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cda(param_2);
  uVar2 = FUN_00103a9a(param_1);
  FUN_00103c12(uVar2,uVar1);
  return;
}




undefined8 FUN_00104839(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010498e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00105305(void)

{
  return;
}




undefined8 FUN_0010529a(void)

{
  return 0;
}




void FUN_00104d66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104c5c(param_3);
  puVar3 = (undefined8 *)FUN_0010281d(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined4 * FUN_00104b92(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001039a6(param_2);
  puVar2 = (undefined4 *)FUN_00104c22(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104470(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_0010281d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104596(undefined8 param_1)

{
  FUN_001046b0(param_1);
  return;
}




void FUN_00102a62(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d46(param_1,param_2);
  return;
}




void FUN_001025e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_00102846(param_1,&local_2c);
  local_28 = (wchar_t *)*puVar1;
  local_20 = strlen((char *)local_28);
  local_18 = (wchar_t *)calloc(local_20 + 1,4);
  if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(local_18,local_28);
  FUN_00104db8(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e02(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103e54(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102cfc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bf4(undefined8 param_1)

{
  FUN_00103d9c(param_1);
  return;
}




undefined8 FUN_0010337e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010405f(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001044f0(local_88);
  __s = malloc(0x32);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00104104 to 0010416d has its CatchHandler @ 001041b9 */
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  FUN_00104530(local_58,local_88);
                    /* try { // try from 00104175 to 00104179 has its CatchHandler @ 001041a4 */
  FUN_001026a5(local_58);
  FUN_00104510(local_58);
  FUN_00104510(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010281d(0x30,param_2);
  uVar1 = FUN_00102daa(param_5);
  uVar2 = FUN_00102d98(param_4);
  uVar3 = FUN_00102d86(param_3);
  uVar4 = FUN_00102cda(param_2);
  uVar5 = FUN_00103a9a(param_1);
                    /* try { // try from 001035d3 to 001035d7 has its CatchHandler @ 001035da */
  FUN_00103ada(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00105326(void)

{
  return;
}




void FUN_0010488a(undefined8 param_1,undefined8 param_2)

{
  FUN_001049bc(param_1,param_2);
  return;
}




void FUN_00102c2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103394(param_1);
  uVar2 = FUN_0010337e(param_1);
  FUN_001033aa(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103eb5(undefined8 param_1)

{
  FUN_001034be(param_1);
  return;
}




undefined4 FUN_001029e0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102ccc(param_1);
  return unaff_EBX;
}




undefined8 FUN_001048e6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00103394(param_1);
  uVar2 = FUN_001049d0(param_2);
  uVar1 = FUN_001049e6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010389a(param_1);
  uVar2 = FUN_00104b55(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00103688(param_1);
  uVar2 = FUN_00104b73(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109ea0)();
  return;
}




undefined8 FUN_00103622(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103360(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031e5(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001039a6(param_1);
  FUN_001039c8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102761(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_00102846(param_1,&local_2c);
  local_28 = (wchar_t *)*puVar1;
  local_20 = wcslen(local_28);
  local_18 = (wchar_t *)calloc(local_20 + 1,4);
  if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(local_18,local_28);
  FUN_00104dde(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001048c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




bool FUN_0010548d(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00103a9a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010535d(void)

{
  return;
}




undefined8 FUN_00102d98(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e38(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001039c8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001047c6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001048c8(local_18,param_1);
  FUN_001048e6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001044f0(undefined8 param_1)

{
  FUN_001044d0(param_1);
  return;
}




void FUN_001048b4(void)

{
  return;
}




void FUN_00105352(void)

{
  return;
}




void FUN_001038b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b4a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b4a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001034be(undefined8 param_1)

{
  FUN_00103a84(param_1);
  return;
}




int FUN_001052a9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010299c(undefined8 param_1)

{
  FUN_00102c7c(param_1);
  return;
}




void FUN_00104fbc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00105368(void)

{
  return;
}




void FUN_001055f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00102a06(undefined8 *param_1)

{
  FUN_00102cda(*param_1);
  return;
}




void FUN_00104eb9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ed3(void)

{
  wchar_t *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001044f0(local_88);
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  local_58[0] = 0;
                    /* try { // try from 00103f7d to 00103fe6 has its CatchHandler @ 00104032 */
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  FUN_00104530(local_58,local_88);
                    /* try { // try from 00103fee to 00103ff2 has its CatchHandler @ 0010401d */
  FUN_001025e9(local_58);
  FUN_00104510(local_58);
  FUN_00104510(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001053c0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105389,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00104f0f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001036fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_0010337e(param_1);
  local_50 = FUN_00103394(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001031e5(local_58);
    local_59 = FUN_00102a28(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103924(local_58);
    }
    else {
      local_58 = FUN_00103a5c(local_58);
    }
  }
  FUN_00103360(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103b5c(param_1);
    cVar1 = FUN_001029ba(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103bac(local_38,&local_58,&local_50);
      goto LAB_0010387e;
    }
    FUN_001038f8(&local_48);
  }
  uVar2 = FUN_0010369e(local_48);
  cVar1 = FUN_00102a28(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103966(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103bac(local_38,&local_58,&local_50);
  }
LAB_0010387e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001041e6(void)

{
  wchar_t *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001044f0(local_88);
  __s = (wchar_t *)malloc(200);
  if (__s == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(__s,L'A',0x31);
  __s[0x31] = L'\0';
  local_58[0] = 0;
                    /* try { // try from 00104290 to 001042f9 has its CatchHandler @ 00104345 */
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00102846(local_88,local_58);
  *puVar1 = __s;
  FUN_00104530(local_58,local_88);
                    /* try { // try from 00104301 to 00104305 has its CatchHandler @ 00104330 */
  FUN_00102761(local_58);
  FUN_00104510(local_58);
  FUN_00104510(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104c5c(param_3);
  FUN_00104d66(param_1,param_2,uVar1);
  return;
}




void FUN_00104b73(undefined8 param_1)

{
  FUN_00104419(param_1);
  return;
}




void FUN_001026a5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  char *local_28;
  size_t local_20;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_00102846(param_1,&local_2c);
  local_28 = (char *)*puVar1;
  local_20 = strlen(local_28);
  local_18 = (char *)calloc(local_20 + 1,1);
  if (local_18 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(local_18,local_28);
  FUN_00104db8(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001046c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103924(local_28);
    FUN_001046c0(param_1,uVar1);
    lVar2 = FUN_00103a5c(local_28);
    FUN_00103322(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103e97(undefined8 param_1)

{
  FUN_00103eb5(param_1);
  return;
}




ulong FUN_001051ac(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010609c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010528b(void)

{
  return 1;
}




void FUN_00103aac(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c6e(param_1,param_2,0);
  return;
}




long FUN_00103394(long param_1)

{
  return param_1 + 8;
}




void FUN_00103cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d86(param_3);
  uVar1 = FUN_00102d98(param_4);
  FUN_00102a62(local_38,uVar1);
  FUN_00102daa(param_5);
  uVar1 = FUN_0010281d(0x10,param_2);
                    /* try { // try from 00103d46 to 00103d4a has its CatchHandler @ 00103d4d */
  FUN_00103e02(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010531b(void)

{
  return;
}




void FUN_001052fa(void)

{
  return;
}




undefined8 FUN_00103672(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




long FUN_001047b0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102833(void)

{
  return;
}




ulong FUN_001050a8(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103360(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001052ef(void)

{
  return;
}




void FUN_001044b0(undefined8 param_1)

{
  FUN_00104596(param_1);
  return;
}




void FUN_00104e64(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102ccc(void)

{
  return;
}




void FUN_001046a0(void)

{
  return;
}




void FUN_0010533c(void)

{
  return;
}




void FUN_00104ee4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001033aa(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_001031e5(local_38);
    cVar1 = FUN_00102a28(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103924(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103a5c(local_38);
    }
  }
  FUN_00103360(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103c6e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103dea(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001046b0(void)

{
  return;
}




undefined8 FUN_00104c5c(undefined8 param_1)

{
  return param_1;
}




void FUN_001036bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103b4a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d46(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034be(param_2);
  uVar1 = FUN_001034dc(uVar1);
  FUN_001034ee(param_1,uVar1);
  return;
}




void FUN_00103966(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b4a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined4 FUN_00102a28(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_00103688(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00105584(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010537e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




void FUN_00105389(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ada(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102daa(param_5);
  uVar2 = FUN_00102d98(param_4);
  uVar3 = FUN_00102d86(param_3);
  FUN_00103cbe(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103a84(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103468(undefined8 param_1)

{
  FUN_00103a72(param_1);
  return;
}




void FUN_00104510(undefined8 param_1)

{
  FUN_001045b6(param_1);
  return;
}




undefined8 FUN_001034dc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010479a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104bf6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00105660(void)

{
  return;
}




void FUN_0010369e(undefined8 param_1)

{
  FUN_001031e5(param_1);
  return;
}




long FUN_00104419(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103dc2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00105347(void)

{
  return;
}




undefined8
FUN_00103238(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00103394(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010369e(param_3);
      uVar5 = FUN_001031e5(param_4);
      cVar1 = FUN_00102a28(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001032bc;
      }
    }
  }
  bVar2 = true;
LAB_001032bc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103360(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103e54(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103e97(param_2);
  puVar2 = (undefined4 *)FUN_001034dc(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8
FUN_00102ae6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102daa(param_5);
  uVar2 = FUN_00102d98(param_4);
  uVar3 = FUN_00102d86(param_3);
  local_40 = FUN_00102dbc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102b62 to 00102ba5 has its CatchHandler @ 00102be3 */
  uVar1 = FUN_001031e5(local_40);
  local_38 = FUN_00102e3c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103322(param_1,local_40);
    FUN_00103360(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103238(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00105015(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 * FUN_001038f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103c12(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dae(param_1,param_2);
  return;
}




void FUN_00102d0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfc(param_2);
  FUN_00103486(param_1,uVar1);
  return;
}




undefined8 FUN_001054e8(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010550b(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00104372(void)

{
  FUN_0010405f();
  FUN_001041e6();
  return;
}




undefined8 FUN_00103a72(undefined8 param_1)

{
  return param_1;
}




void FUN_001055c2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103d9c(undefined8 param_1)

{
  return param_1;
}




long FUN_00102846(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00102972(param_1,param_2);
  local_28 = FUN_0010299c(param_1);
  cVar2 = FUN_001029ba(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001029e0(param_1);
    uVar3 = FUN_00102a06(&local_38);
    cVar2 = FUN_00102a28(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001028e6;
    }
  }
  bVar1 = true;
LAB_001028e6:
  if (bVar1) {
    uVar3 = FUN_00102a4f(param_2);
    FUN_00102a8c(local_30,uVar3);
    FUN_00102ac4(&local_28,&local_38);
    local_38 = FUN_00102ae6(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_00102a06(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00103622(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00103394(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010369e(local_50);
    cVar2 = FUN_00102a28(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010369e(local_50);
      cVar2 = FUN_00102a28(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103966(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00103688(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00103688(local_60);
          local_48[1] = 0;
          FUN_001036bc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010393a(local_48);
          uVar6 = FUN_0010369e(*puVar5);
          cVar2 = FUN_00102a28(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001036fc(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103924(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001036bc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001038b0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010389a(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010389a(local_60);
        uVar6 = FUN_0010389a(local_60);
        FUN_001038b0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001038f8(local_48);
        uVar6 = FUN_0010369e(*puVar5);
        cVar2 = FUN_00102a28(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001036fc(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103924(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001036bc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001038b0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001031ca;
  }
  lVar3 = FUN_00103672(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102ede:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00103688(local_60);
    uVar6 = FUN_0010369e(*puVar5);
    cVar2 = FUN_00102a28(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102ede;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00103688(local_60);
    local_48[1] = 0;
    FUN_001036bc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001036fc(local_60,param_3);
  }
LAB_001031ca:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_001043ec(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001052ce(void)

{
  return;
}




void FUN_00103322(undefined8 param_1,undefined8 param_2)

{
  FUN_001039de(param_1,param_2);
  FUN_00103a22(param_1,param_2);
  return;
}




undefined8 FUN_00102a4f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d86(undefined8 param_1)

{
  return param_1;
}




void FUN_00104680(undefined8 param_1)

{
  FUN_0010482a(param_1);
  return;
}




void FUN_00105048(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00103b4a(undefined8 param_1)

{
  return param_1;
}




void FUN_001052e4(void)

{
  return;
}




undefined8 FUN_0010498e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010488a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103d89(undefined8 param_1)

{
  return param_1;
}




void FUN_00104c22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104c5c(param_2);
  FUN_00104c6e(uVar1,uVar2);
  return;
}




undefined8 FUN_00103dea(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00104446(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00104470(param_1);
  return;
}




void FUN_00105310(void)

{
  return;
}




void FUN_00102cda(long param_1)

{
  FUN_00103468(param_1 + 0x20);
  return;
}




void FUN_00104fe7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104b55(undefined8 param_1)

{
  FUN_001043ec(param_1);
  return;
}




undefined8 FUN_00103b5c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103360(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039a6(long param_1)

{
  FUN_00103bf4(param_1 + 0x20);
  return;
}




long FUN_0010389a(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001052c3(void)

{
  return;
}




void FUN_00104530(undefined8 param_1,undefined8 param_2)

{
  FUN_001045f4(param_1,param_2);
  return;
}




undefined8 FUN_00102c7c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103360(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_0010393a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00103518(param_1);
  uVar2 = FUN_00102daa(param_4);
  uVar3 = FUN_00102d98(param_3);
  uVar4 = FUN_00102d86(param_2);
  FUN_00103544(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104f94(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001055a3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102ac4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104e10(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103518(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a9a(param_1);
  FUN_00103aac(uVar1,1);
  return;
}




void FUN_00103c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103dc2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105331(void)

{
  return;
}




void FUN_001052d9(void)

{
  return;
}




undefined8 FUN_001049d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103dae(void)

{
  return;
}




void FUN_00103a22(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a9a(param_1);
  FUN_00103c3c(uVar1,param_2,1);
  return;
}




void FUN_00105373(void)

{
  return;
}




void FUN_00102972(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2c(param_1,param_2);
  return;
}




undefined8 FUN_00102a8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfc(param_2);
  FUN_00102d0e(param_1,uVar1);
  return param_1;
}




void FUN_00103486(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfc(param_2);
  FUN_001034ee(param_1,uVar1);
  return;
}




void FUN_001049bc(void)

{
  return;
}




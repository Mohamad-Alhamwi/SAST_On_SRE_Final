
void FUN_001021e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102acb(param_1,param_2);
  return;
}




void FUN_00103f94(void)

{
  return;
}




void FUN_001041e3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010292c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010328b(undefined8 param_1,undefined8 param_2)

{
  FUN_001034d8(param_1,param_2,0);
  return;
}




void FUN_00103c69(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00102b18(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028db(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ecd(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103f10(void)

{
  return;
}




void FUN_00101dec(undefined8 param_1)

{
  FUN_00102136(param_1);
  FUN_00102156(param_1);
  return;
}




void FUN_0010161c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017cc(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001039d9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a31(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00103011(void)

{
  return;
}




void FUN_00101dac(undefined8 param_1)

{
  FUN_00101dec(param_1);
  return;
}




void FUN_00101d8c(undefined8 param_1)

{
  FUN_00101e18(param_1);
  return;
}




void FUN_00103f31(void)

{
  return;
}




void FUN_00103ee4(void)

{
  return;
}




void FUN_00103f26(void)

{
  return;
}




void FUN_00103f68(void)

{
  return;
}




void FUN_0010385b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001031b4(param_3);
  uVar2 = FUN_001031b4(local_28);
  uVar3 = FUN_001031b4(local_20);
  uVar1 = FUN_00103941(uVar3,uVar2,uVar1);
  FUN_00103428(&local_30,uVar1);
  return;
}




void FUN_00101b33(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dcc(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101b8a to 00101c85 has its CatchHandler @ 00101cd1 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001039d9("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  FUN_00102016(local_48,local_68);
                    /* try { // try from 00101c8d to 00101c91 has its CatchHandler @ 00101cbc */
  FUN_001016ef(local_48);
  FUN_00101e8a(local_48);
  FUN_00101e8a(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103663(undefined8 param_1)

{
  FUN_001036b0(param_1);
  return;
}




void FUN_00103f9f(void)

{
  return;
}




void FUN_00101e38(long *param_1)

{
  FUN_00102198(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d8c(param_1);
  return;
}




undefined8 FUN_00103ebb(void)

{
  return 0;
}




void FUN_00102a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb4(param_1,param_2,param_3);
  return;
}




void FUN_00103f1b(void)

{
  return;
}




void FUN_00102c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030b3(param_2);
  uVar2 = FUN_001030b3(param_1);
  FUN_001030ff(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010293e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f24(param_1,param_3);
                    /* try { // try from 00102978 to 0010297c has its CatchHandler @ 0010297f */
  FUN_00102f5a(param_1,param_2);
  return;
}




void FUN_00103ada(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102efa(undefined8 param_1,undefined8 param_2)

{
  FUN_00103306(param_1,param_2);
  return;
}




void * FUN_001038c9(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




undefined8 FUN_00101d10(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039d9("Calling good()...");
  FUN_00101cfb();
  FUN_001039d9("Finished good()");
  FUN_001039d9("Calling bad()...");
  FUN_001017f0();
  FUN_001039d9("Finished bad()");
  return 0;
}




undefined8 FUN_00103134(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bdd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103306(void)

{
  return;
}




void FUN_00103faa(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00102d4e(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00103236(param_1);
  lVar2 = FUN_001028b4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001028b4(local_40);
  local_30 = FUN_001028b4(local_40);
  plVar3 = (long *)FUN_0010325c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001028b4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103236(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103236(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103b5b(undefined4 param_1)

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




void FUN_00102b2a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_0010303a(param_3);
  uVar2 = FUN_00103024(param_1);
  FUN_0010304c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00102246(param_1);
  local_18 = FUN_0010229d(&local_38,&local_20);
  local_20 = FUN_00102802(local_30);
  uVar1 = FUN_0010284e(&local_20,local_18);
  FUN_001022e2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102802(local_30);
  FUN_0010284e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104109(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102802(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102212(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103319(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010351e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010284e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102212(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010304c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010303a(param_3);
  FUN_0010334a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001029fc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102af6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_001040ae(pthread_t *param_1)

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




void FUN_00101cfb(void)

{
  FUN_001019b8();
  FUN_00101b33();
  return;
}




undefined8 FUN_00101d75(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102198(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a99(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103835(param_2);
  uVar2 = FUN_00103835(param_1);
  FUN_0010385b(uVar2,uVar1,param_3);
  return;
}




void FUN_00102212(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102fea(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101490();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_00103615(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001031b4(param_1);
  uVar1 = FUN_00103798(uVar1,param_2,param_3);
  FUN_00103428(&local_10,uVar1);
  return;
}




void FUN_00103f89(void)

{
  return;
}




void FUN_00103eef(void)

{
  return;
}




undefined8 FUN_00103fe1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103faa,local_18);
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




void FUN_00101549(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017cc(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001039d9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a31(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_0010343e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103615(param_1,param_2,param_3);
  return;
}




void FUN_001016ef(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017cc(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001039d9("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a31(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00103236(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010292c(param_1);
  FUN_0010346f(uVar1);
  return;
}




void FUN_00102af6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102b8a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103024(param_1);
  FUN_00103089(*param_1,uVar1);
  return;
}




void FUN_00103bb5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102016(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010292c(param_2);
  FUN_001028db(&local_31,uVar1);
  uVar1 = FUN_001028b4(param_2);
                    /* try { // try from 0010207c to 00102080 has its CatchHandler @ 001020e9 */
  FUN_0010293e(param_1,uVar1,&local_31);
  FUN_00101e18(&local_31);
  uVar2 = FUN_001021d2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029fc(param_2);
  uVar4 = FUN_001029a4(param_2);
                    /* try { // try from 001020ca to 001020ce has its CatchHandler @ 00102107 */
  uVar1 = FUN_00102a54(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010359f(param_1,param_2,param_3);
  return;
}




void FUN_00103c08(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104280(void)

{
  return;
}




undefined8 FUN_001029a4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102af6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f5d(void)

{
  return;
}




void FUN_00103b30(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined4 * FUN_00103798(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103146(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001031b4(param_3);
  uVar2 = FUN_001031b4(local_28);
  uVar3 = FUN_001031b4(local_20);
  uVar1 = FUN_001033f3(uVar3,uVar2,uVar1);
  FUN_00103428(&local_30,uVar1);
  return;
}




void FUN_001039d9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dcc(undefined8 param_1)

{
  FUN_00101dac(param_1);
  return;
}




void FUN_0010334a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0010303a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101d75(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e8a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d2(param_1);
  FUN_001021e4(*param_1,param_1[1],uVar1);
  FUN_00101e38(param_1);
  return;
}




void FUN_00103f7e(void)

{
  return;
}




void FUN_00102a8a(void)

{
  return;
}




undefined8 FUN_00102246(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102af6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102188(void)

{
  return;
}




void FUN_001030ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033be(param_1,param_2,param_3);
  return;
}




int FUN_00103eca(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102e75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032b9(param_2);
  uVar2 = FUN_001032b9(param_1);
  FUN_001030ff(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103f47(void)

{
  return;
}




void FUN_001017f0(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dcc(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101847 to 00101942 has its CatchHandler @ 0010198e */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001039d9("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed2(local_68);
  FUN_00101f22(local_48,&local_70);
  FUN_00101f50(local_68,local_48[0],1,&local_74);
  FUN_00102016(local_48,local_68);
                    /* try { // try from 0010194a to 0010194e has its CatchHandler @ 00101979 */
  FUN_00101549(local_48);
  FUN_00101e8a(local_48);
  FUN_00101e8a(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




undefined8 FUN_001031b4(undefined8 param_1)

{
  return param_1;
}




void FUN_001022e2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00102d4e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102802(local_80);
      local_60 = FUN_00102bdc(&local_88,&local_78);
      local_70 = FUN_00102e3e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001021d2(local_80);
                    /* try { // try from 001025ec to 00102677 has its CatchHandler @ 0010272f */
      FUN_00102d19(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001021d2(local_80);
      puVar2 = (undefined8 *)FUN_00102234(&local_88);
      local_70 = FUN_00102e75(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001021d2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102234(&local_88);
      local_70 = FUN_00102e75(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001021d2(local_80);
      FUN_001021e4(*local_80,local_80[1],uVar1);
      FUN_00102198(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102b2a(local_38,param_1,param_4);
                    /* try { // try from 0010236c to 0010253f has its CatchHandler @ 00102711 */
      local_50 = FUN_00102bbe(local_38);
      local_78 = FUN_00101ed2(local_80);
      local_48 = FUN_00102bdc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001021d2(local_80);
        FUN_00102c20(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102234(&local_88);
        FUN_00102c78(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102234(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102234(&local_88);
        FUN_00102cc8(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001021d2(local_80);
        lVar4 = FUN_00102d19(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001021d2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102234(&local_88);
        FUN_00102c20(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102234(&local_88);
        FUN_00102cc8(*puVar2,local_40,local_50);
      }
      FUN_00102b8a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00103976(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103f52(void)

{
  return;
}




void FUN_001033be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010356e(param_1,param_2,param_3);
  return;
}




void FUN_00102f5a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102e3e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_0010356e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103748(param_1,param_2,param_3);
  return;
}




void FUN_00102bbe(undefined8 param_1)

{
  FUN_00103024(param_1);
  return;
}




void FUN_0010338c(void)

{
  return;
}




void FUN_00102136(undefined8 param_1)

{
  FUN_00102a8a(param_1);
  return;
}




long FUN_001017cc(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




long FUN_001028b4(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_001037df(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102b18(&local_10);
  return *puVar1;
}




void FUN_001036da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_001031b4(param_3);
  uVar2 = FUN_001037df(local_28);
  uVar3 = FUN_001037df(local_20);
  uVar1 = FUN_00103800(uVar3,uVar2,uVar1);
  FUN_00103428(&local_30,uVar1);
  return;
}




void FUN_001031c6(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103efa(void)

{
  return;
}




ulong * FUN_0010325c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103f73(void)

{
  return;
}




void FUN_001033a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_00103dcd(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105110,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103a85(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103089(undefined8 param_1,undefined8 param_2)

{
  FUN_0010338c(param_1,param_2);
  return;
}




void FUN_00101e18(undefined8 param_1)

{
  FUN_00102188(param_1);
  return;
}




void FUN_00103b05(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d19(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103200(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010346f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103663(param_1);
  puVar1 = (undefined8 *)FUN_00103681(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_0010392c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102f24(undefined8 param_1,undefined8 param_2)

{
  FUN_00102efa(param_1,param_2);
  FUN_00102156(param_1);
  return;
}




void FUN_00103c36(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001036c8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a31(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fea(param_1,param_2,param_3);
  return;
}




void FUN_00102156(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_0010303a(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103cc9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001030b3(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102bdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102234(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102234(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103319(param_1,param_2,param_3);
  return;
}




void FUN_00103f3c(void)

{
  return;
}




void FUN_001019b8(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dcc(local_58);
  local_64 = 7;
  local_60 = FUN_00101ed2(local_58);
  FUN_00101f22(local_38,&local_60);
                    /* try { // try from 00101a28 to 00101abd has its CatchHandler @ 00101b09 */
  FUN_00101f50(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101ed2(local_58);
  FUN_00101f22(local_38,&local_60);
  FUN_00101f50(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101ed2(local_58);
  FUN_00101f22(local_38,&local_60);
  FUN_00101f50(local_58,local_38[0],1,&local_64);
  FUN_00102016(local_38,local_58);
                    /* try { // try from 00101ac5 to 00101ac9 has its CatchHandler @ 00101af4 */
  FUN_0010161c(local_38);
  FUN_00101e8a(local_38);
  FUN_00101e8a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102234(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038c9(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010412c(undefined8 *param_1)

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




void FUN_001039ff(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001021d2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103aaf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103eac(void)

{
  return 1;
}




long FUN_0010229d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102b18(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102b18(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00102ecd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102efa(param_1,param_2);
  return param_1;
}




void FUN_00104210(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103835(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010392c(&local_10);
  FUN_00103134(uVar1);
  return;
}




long FUN_0010359f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_00103428(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103f05(void)

{
  return;
}




undefined8 FUN_00102e3e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010328b(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010351e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036c8(param_2);
  uVar2 = FUN_001036c8(param_1);
  FUN_001036da(uVar2,uVar1,param_3);
  return;
}




long FUN_00103024(long param_1)

{
  return param_1 + 8;
}




void FUN_00102cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031b4(param_2);
  uVar2 = FUN_001031b4(param_1);
  FUN_001031c6(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102234(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032b9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001033a0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103941(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103976(param_1,param_2,param_3);
  return;
}




void FUN_001034d8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036b0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_001036b0(void)

{
  return 0x1fffffffffffffff;
}




undefined8 FUN_00101ed2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102212(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041c4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103a59(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong * FUN_00103681(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102acb(undefined8 param_1,undefined8 param_2)

{
  FUN_00103011(param_1,param_2);
  return;
}




void FUN_00102c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103134(param_2);
  uVar2 = FUN_00103134(param_1);
  FUN_00103146(uVar2,uVar1,param_3);
  return;
}




void FUN_00103200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010343e(param_1,param_2,param_3);
  return;
}




void FUN_001041a5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




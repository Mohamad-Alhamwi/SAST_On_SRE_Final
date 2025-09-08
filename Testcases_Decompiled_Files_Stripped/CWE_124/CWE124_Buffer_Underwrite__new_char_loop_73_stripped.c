
undefined8 FUN_00101bb2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010181e(undefined8 param_1)

{
  FUN_0010188a(param_1);
  return;
}




void FUN_00101ff2(undefined8 param_1)

{
  FUN_00102188(param_1);
  return;
}




void FUN_0010188a(undefined8 param_1)

{
  FUN_001019ec(param_1);
  FUN_001017be(param_1);
  return;
}




void FUN_00102615(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101cf0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102010(param_1,param_2);
  return;
}




void FUN_001029f4(void)

{
  return;
}




void FUN_00102a6d(void)

{
  return;
}




undefined8 FUN_00101d7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102056(param_1);
  uVar2 = FUN_00101cde(param_1);
  FUN_0010207a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d68(param_2);
  uVar4 = FUN_00101cbc(uVar1);
  FUN_001020f3(uVar2,uVar4,uVar3);
  FUN_00102130(local_38,0);
  FUN_001020b4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a15(void)

{
  return;
}




void FUN_00102cf3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001024e9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102023(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010219a(param_1,param_2,param_3);
  return;
}




void FUN_00101f1a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_001015b5(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017fe(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001015ea to 00101667 has its CatchHandler @ 001016b3 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
  FUN_001018b6(local_58,&local_68);
  FUN_001018b6(local_58,&local_68);
  FUN_001018b6(local_58,&local_68);
  FUN_001018f0(local_38,local_58);
                    /* try { // try from 0010166f to 00101673 has its CatchHandler @ 0010169e */
  FUN_00102392(local_38);
  FUN_0010181e(local_38);
  FUN_0010181e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029bc(void)

{
  return 1;
}




void FUN_00102746(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 * FUN_00101f5e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102166(long param_1)

{
  FUN_00102246(param_1 + 0x10);
  return;
}




void FUN_00102a4c(void)

{
  return;
}




void FUN_00101c4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00101f38(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f82(&local_18);
    FUN_00101fa4(local_10,uVar2);
    FUN_00101f5e(&local_18);
  }
  return;
}




ulong FUN_001028dd(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ab6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d68(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d7a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e44(param_1,1);
  return;
}




void FUN_001025bf(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a99(void)

{
  return;
}




void FUN_001024c8(undefined8 *param_1)

{
  FUN_00101cbc(*param_1);
  return;
}




void FUN_001016dd(void)

{
  FUN_001015b5();
  return;
}




void FUN_0010250f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102aaf(void)

{
  return;
}




void FUN_00102246(undefined8 param_1)

{
  FUN_001022b4(param_1);
  return;
}




undefined8 FUN_001022b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102569(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101b17(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e6e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102aba(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101752(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010219a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001029cb(void)

{
  return 0;
}




void FUN_00101f82(undefined8 *param_1)

{
  FUN_00102166(*param_1);
  return;
}




undefined8 FUN_001016ed(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024e9("Calling good()...");
  FUN_001016dd();
  FUN_001024e9("Finished good()");
  FUN_001024e9("Calling bad()...");
  FUN_00101489();
  FUN_001024e9("Finished bad()");
  return 0;
}




undefined8 FUN_00101a6a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d4a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cb5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a20(void)

{
  return;
}




undefined8 FUN_00102c3c(undefined8 *param_1)

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




void FUN_001018b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a6a(param_1);
  FUN_00101ab6(param_1,uVar1,param_2);
  return;
}




void FUN_00102056(undefined8 param_1)

{
  FUN_001021c1(param_1,1);
  return;
}




void FUN_001017fe(undefined8 param_1)

{
  FUN_001017de(param_1);
  return;
}




void FUN_00102595(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017de(undefined8 param_1)

{
  FUN_0010183e(param_1);
  return;
}




void FUN_001017be(undefined8 param_1)

{
  FUN_0010186a(param_1);
  return;
}




void FUN_0010186a(undefined8 param_1)

{
  FUN_001019dc(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102cd4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a36(void)

{
  return;
}




undefined8 FUN_001021ef(undefined8 param_1)

{
  return param_1;
}




void FUN_00102640(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d68(param_2);
  uVar2 = FUN_00101a6a(param_1);
  FUN_00101ab6(param_1,uVar2,uVar1);
  return;
}




void FUN_00102446(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a6a(param_1);
  FUN_001024a4(&local_18);
  FUN_001024c8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019bc(undefined8 param_1)

{
  FUN_00101cac(param_1);
  return;
}




void FUN_001019dc(void)

{
  return;
}




void FUN_00101768(undefined8 param_1)

{
  FUN_00101788(param_1);
  return;
}




void FUN_00101b7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec6(param_2);
  FUN_00101ed8(param_1,uVar1);
  return;
}




void FUN_00102a2b(void)

{
  return;
}




void FUN_001026ed(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a41(void)

{
  return;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_00102541(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102aa4(void)

{
  return;
}




undefined8 FUN_00101b68(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102152(param_1,param_2);
  return;
}




void FUN_00101ed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ec6(param_2);
  FUN_00101e9c(param_1,uVar1);
  FUN_00101768(param_1);
  return;
}




undefined8 FUN_00101d68(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0a(void)

{
  return;
}




void FUN_001020f3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d68(param_3);
  FUN_00102202(param_1,param_2,uVar1);
  return;
}




void FUN_00102a83(void)

{
  return;
}




undefined8 FUN_00101e6e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e9c(param_1,param_2);
  return param_1;
}




void FUN_00102202(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d68(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101752(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102718(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




undefined8 FUN_00101cde(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d4a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102152(void)

{
  return;
}




long * FUN_001024a4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102a62(void)

{
  return;
}




undefined8 FUN_00102af1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aba,local_18);
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




undefined8 FUN_00102c19(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a57(void)

{
  return;
}




void FUN_00102a78(void)

{
  return;
}




void FUN_001022de(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00102446(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_001024e9(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001025ea(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102d90(void)

{
  return;
}




long FUN_00102130(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001020b4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102023(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001018f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b68(param_2);
  FUN_00101b17(&local_21,uVar1);
  FUN_00101b7a(param_1,&local_21);
  FUN_0010186a(&local_21);
  uVar1 = FUN_00101c02(param_2);
  uVar2 = FUN_00101bb2(param_2);
                    /* try { // try from 0010197c to 00101980 has its CatchHandler @ 00101983 */
  FUN_00101c4e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cbc(local_20);
    uVar3 = FUN_00101cde(param_1);
    FUN_00101cf0(uVar3,uVar2);
    FUN_00101d1a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010266b(undefined4 param_1)

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




undefined8 FUN_001022c6(void)

{
  return 0x555555555555555;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




bool FUN_00102bbe(pthread_t *param_1)

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




void FUN_0010183e(undefined8 param_1)

{
  FUN_001019bc(param_1);
  FUN_00101768(param_1);
  return;
}




undefined8 FUN_00101f38(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010207a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021ef(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101e44(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001021c1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102264(param_1,param_2,0);
  return;
}




void FUN_001029ff(void)

{
  return;
}




void FUN_00101489(void)

{
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017fe(local_58);
  local_68 = 0;
                    /* try { // try from 001014be to 0010153f has its CatchHandler @ 0010158b */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
  FUN_001018b6(local_58,&local_68);
  FUN_001018b6(local_58,&local_68);
  FUN_001018b6(local_58,&local_68);
  FUN_001018f0(local_38,local_58);
                    /* try { // try from 00101547 to 0010154b has its CatchHandler @ 00101576 */
  FUN_001022de(local_38);
  FUN_0010181e(local_38);
  FUN_0010181e(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102188(undefined8 param_1)

{
  return param_1;
}




void FUN_00102264(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022c6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026c5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




int FUN_001029da(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102392(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00102446(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_001024e9(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101788(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101ec6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c02(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f1a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cbc(long param_1)

{
  FUN_00101ff2(param_1 + 0x10);
  return;
}




void FUN_00101d1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102023(param_1,param_2,1);
  return;
}




ulong FUN_001027d9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102779(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102a8e(void)

{
  return;
}




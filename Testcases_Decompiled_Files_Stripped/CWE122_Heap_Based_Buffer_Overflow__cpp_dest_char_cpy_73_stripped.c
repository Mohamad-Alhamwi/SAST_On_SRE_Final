
void FUN_00101a74(undefined8 param_1)

{
  FUN_00101ad4(param_1);
  return;
}




long * FUN_001016b0(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101f42(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220f(param_1,param_2,1);
  return;
}




void FUN_00101714(long param_1)

{
  FUN_00101736(param_1 + 0x10);
  return;
}




void FUN_001024de(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101664(param_1);
  FUN_00101d00(param_1,uVar1,param_2);
  return;
}




void FUN_00102748(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001029fa(void)

{
  return;
}




void FUN_00102ca3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c82(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101714(local_20);
    uVar3 = FUN_00101f06(param_1);
    FUN_00101f18(uVar3,uVar2);
    FUN_00101f42(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_0010298b(void)

{
  return 1;
}




void FUN_00102c84(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102ac0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a89,local_18);
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




undefined8 FUN_001023c9(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102242(param_1);
  uVar2 = FUN_00101f06(param_1);
  FUN_00102266(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f71(param_2);
  uVar4 = FUN_00101714(uVar1);
  FUN_001022df(uVar2,uVar4,uVar3);
  FUN_0010231c(local_38,0);
  FUN_001022a0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00101e4c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102124(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f71(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_001026bc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025e4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ef6(void)

{
  return;
}




undefined8 FUN_00102142(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001029d9(void)

{
  return;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101b20(param_1);
  return;
}




void FUN_00102694(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019e7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001024a0(void)

{
  return 0x555555555555555;
}




void FUN_00102a26(void)

{
  return;
}




void FUN_0010239b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010243e(param_1,param_2,0);
  return;
}




void FUN_001023dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f71(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019e7(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102c0b(undefined8 *param_1)

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




void FUN_00102cf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a3c(void)

{
  return;
}




void FUN_00102242(undefined8 param_1)

{
  FUN_0010239b(param_1,1);
  return;
}




void FUN_001022a0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010220f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010243e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024a0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001019fe(undefined8 param_1)

{
  FUN_00101a1e(param_1);
  return;
}




void FUN_00102a47(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_0010218c(undefined8 *param_1)

{
  FUN_00102352(*param_1);
  return;
}




void FUN_001026e7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f06(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 FUN_00101982(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b8("Calling good()...");
  FUN_00101972();
  FUN_001024b8("Finished good()");
  FUN_001024b8("Calling bad()...");
  FUN_00101766();
  FUN_001024b8("Finished bad()");
  return 0;
}




void FUN_00102a7e(void)

{
  return;
}




undefined8 FUN_0010299a(void)

{
  return 0;
}




void FUN_00102a73(void)

{
  return;
}




void FUN_00101736(undefined8 param_1)

{
  FUN_00101754(param_1);
  return;
}




void FUN_0010204e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101664(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cc2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_0010248e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101606(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101664(param_1);
  FUN_001016b0(&local_18);
  FUN_001016d4(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101567(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101606(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001024b8(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a89(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029c3(void)

{
  return;
}




void FUN_001021fc(void)

{
  return;
}




void FUN_00102510(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f18(undefined8 param_1,undefined8 param_2)

{
  FUN_001021fc(param_1,param_2);
  return;
}




void FUN_00102352(long param_1)

{
  FUN_00102420(param_1 + 0x10);
  return;
}




bool FUN_00102b8d(pthread_t *param_1)

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




void FUN_00101766(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a94(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 0010179b to 001017f6 has its CatchHandler @ 00101842 */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b86(local_38,local_58);
                    /* try { // try from 001017fe to 00101802 has its CatchHandler @ 0010182d */
  FUN_001014c9(local_38);
  FUN_00101ab4(local_38);
  FUN_00101ab4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186c(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a94(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 001018a1 to 001018fc has its CatchHandler @ 00101948 */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b4c(local_58,&local_60);
  FUN_00101b86(local_38,local_58);
                    /* try { // try from 00101904 to 00101908 has its CatchHandler @ 00101933 */
  FUN_00101567(local_38);
  FUN_00101ab4(local_38);
  FUN_00101ab4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101b00(param_1);
  return;
}




int FUN_001029a9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010258e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029ce(void)

{
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101c52(param_1);
  FUN_001019fe(param_1);
  return;
}




void FUN_00102420(undefined8 param_1)

{
  FUN_0010248e(param_1);
  return;
}




void FUN_00102a31(void)

{
  return;
}




void FUN_00101a1e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101db2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101dfc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102124(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c72(void)

{
  return;
}




ulong FUN_001028ac(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001020d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a10(void)

{
  return;
}




undefined8 FUN_00101d61(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102078(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010220f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102374(param_1,param_2,param_3);
  return;
}




void FUN_001025b9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101c82(param_1);
  FUN_00101a54(param_1);
  return;
}




void FUN_00101c52(undefined8 param_1)

{
  FUN_00101ef6(param_1);
  return;
}




void FUN_00102124(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102374(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029ef(void)

{
  return;
}




void FUN_00102a52(void)

{
  return;
}




void FUN_00102a68(void)

{
  return;
}




void FUN_001029e4(void)

{
  return;
}




void FUN_00102a05(void)

{
  return;
}




long FUN_0010231c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024b8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102be8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020d0(param_2);
  FUN_001020a6(param_1,uVar1);
  FUN_001019fe(param_1);
  return;
}




void FUN_001020a6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233e(param_1,param_2);
  return;
}




undefined8 FUN_00101754(undefined8 param_1)

{
  return param_1;
}




void FUN_00101972(void)

{
  FUN_0010186c();
  return;
}




void FUN_00102538(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f71(param_3);
  FUN_001023dc(param_1,param_2,uVar1);
  return;
}




void FUN_00102a5d(void)

{
  return;
}




void FUN_001016d4(undefined8 *param_1)

{
  FUN_00101714(*param_1);
  return;
}




void FUN_00101e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102142(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010218c(&local_18);
    FUN_001021ae(local_10,uVar2);
    FUN_00102168(&local_18);
  }
  return;
}




undefined8 FUN_00102078(undefined8 param_1,undefined8 param_2)

{
  FUN_001020a6(param_1,param_2);
  return param_1;
}




void FUN_00101d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f71(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f84(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010204e(param_1,1);
  return;
}




void FUN_001021ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f71(param_2);
  uVar2 = FUN_00101664(param_1);
  FUN_00101d00(param_1,uVar2,uVar1);
  return;
}




ulong FUN_001027a8(long param_1,ulong param_2,long param_3)

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




undefined8 * FUN_00102168(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102266(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023c9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102564(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102715(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_0010233e(void)

{
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101606(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(__dest,local_78);
  FUN_001024b8(__dest);
  if (__dest != (char *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020d0(param_2);
  FUN_001020e2(param_1,uVar1);
  return;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101a74(param_1);
  return;
}




void FUN_00101b00(undefined8 param_1)

{
  FUN_00101c72(param_1);
  return;
}




void FUN_00101b86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101db2(param_2);
  FUN_00101d61(&local_21,uVar1);
  FUN_00101dc4(param_1,&local_21);
  FUN_00101b00(&local_21);
  uVar1 = FUN_00101e4c(param_2);
  uVar2 = FUN_00101dfc(param_2);
                    /* try { // try from 00101c12 to 00101c16 has its CatchHandler @ 00101c19 */
  FUN_00101e98(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010263a(undefined4 param_1)

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




void FUN_0010260f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a1b(void)

{
  return;
}




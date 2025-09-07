
void FUN_00101f44(undefined8 param_1,undefined8 param_2)

{
  FUN_00102211(param_1,param_2,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




undefined8 FUN_00101984(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024ba("Calling good()...");
  FUN_00101974();
  FUN_001024ba("Finished good()");
  FUN_001024ba("Calling bad()...");
  FUN_00101742();
  FUN_001024ba("Finished bad()");
  return 0;
}




void FUN_00102354(long param_1)

{
  FUN_00102422(param_1 + 0x10);
  return;
}




void FUN_00101a20(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001029db(void)

{
  return;
}




undefined8 FUN_001020d2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a6a(void)

{
  return;
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




void FUN_00101c54(undefined8 param_1)

{
  FUN_00101ef8(param_1);
  return;
}




undefined8 * FUN_0010216a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a8b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f73(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f86(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102050(param_1,1);
  return;
}




ulong FUN_001027aa(long param_1,ulong param_2,long param_3)

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




void FUN_0010239d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102440(param_1,param_2,0);
  return;
}




void FUN_00102268(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023cb(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102376(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long * FUN_0010168c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102a49(void)

{
  return;
}




void FUN_00102a1d(void)

{
  return;
}




void FUN_001022e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f73(param_3);
  FUN_001023de(param_1,param_2,uVar1);
  return;
}




void FUN_001024ba(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c86(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101f86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102244(param_1);
  uVar2 = FUN_00101f08(param_1);
  FUN_00102268(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f73(param_2);
  uVar4 = FUN_001016f0(uVar1);
  FUN_001022e1(uVar2,uVar4,uVar3);
  FUN_0010231e(local_38,0);
  FUN_001022a2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a3e(void)

{
  return;
}




void FUN_00101e9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102144(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010218e(&local_18);
    FUN_001021b0(local_10,uVar2);
    FUN_0010216a(&local_18);
  }
  return;
}




void FUN_001029c5(void)

{
  return;
}




void FUN_0010274a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001016b0(undefined8 *param_1)

{
  FUN_001016f0(*param_1);
  return;
}




ulong FUN_001028ae(long param_1,ulong param_2,long param_3)

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




void FUN_001025bb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102611(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010299c(void)

{
  return 0;
}




void FUN_00101ef8(void)

{
  return;
}




void FUN_001016f0(long param_1)

{
  FUN_00101712(param_1 + 0x10);
  return;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101b22(param_1);
  return;
}




void FUN_00102512(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a54(void)

{
  return;
}




long FUN_0010231e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001016d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101e4e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102126(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ac2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a8b,local_18);
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




void FUN_00101a56(undefined8 param_1)

{
  FUN_00101b02(param_1);
  return;
}




void FUN_00101b4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101640(param_1);
  FUN_00101d02(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_001023cb(undefined8 param_1)

{
  return param_1;
}




void FUN_00101974(void)

{
  FUN_0010185b();
  return;
}




int FUN_001029ab(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010185b(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a96(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(100);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001018c1 to 001018fe has its CatchHandler @ 0010194a */
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b88(local_38,local_58);
                    /* try { // try from 00101906 to 0010190a has its CatchHandler @ 00101935 */
  FUN_00101545(local_38);
  FUN_00101ab6(local_38);
  FUN_00101ab6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101742(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a96(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(0x32);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001017a8 to 001017e5 has its CatchHandler @ 00101831 */
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b4e(local_58,&local_60);
  FUN_00101b88(local_38,local_58);
                    /* try { // try from 001017ed to 001017f1 has its CatchHandler @ 0010181c */
  FUN_001014a9(local_38);
  FUN_00101ab6(local_38);
  FUN_00101ab6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a00(undefined8 param_1)

{
  FUN_00101a20(param_1);
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e2(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001024ba(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102bea(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102566(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029e6(void)

{
  return;
}




void FUN_00102340(void)

{
  return;
}




void FUN_001026e9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




undefined8 FUN_00101db4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020d2(param_2);
  FUN_001020e4(param_1,uVar1);
  return;
}




void FUN_00101712(undefined8 param_1)

{
  FUN_00101730(param_1);
  return;
}




void FUN_00101f1a(undefined8 param_1,undefined8 param_2)

{
  FUN_001021fe(param_1,param_2);
  return;
}




bool FUN_00102b8f(pthread_t *param_1)

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




void FUN_00102a07(void)

{
  return;
}




undefined8 FUN_00102c0d(undefined8 *param_1)

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




void FUN_00102050(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_0010298d(void)

{
  return 1;
}




undefined8 FUN_00101f08(undefined8 param_1)

{
  return param_1;
}




void FUN_001021fe(void)

{
  return;
}




void FUN_00102244(undefined8 param_1)

{
  FUN_0010239d(param_1,1);
  return;
}




undefined8 FUN_00102144(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a80(void)

{
  return;
}




void FUN_00102440(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024a2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001021b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f73(param_2);
  uVar2 = FUN_00101640(param_1);
  FUN_00101d02(param_1,uVar2,uVar1);
  return;
}




void FUN_00102590(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101db4(param_2);
  FUN_00101d63(&local_21,uVar1);
  FUN_00101dc6(param_1,&local_21);
  FUN_00101b02(&local_21);
  uVar1 = FUN_00101e4e(param_2);
  uVar2 = FUN_00101dfe(param_2);
                    /* try { // try from 00101c14 to 00101c18 has its CatchHandler @ 00101c1b */
  FUN_00101e9a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a12(void)

{
  return;
}




void FUN_00101545(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015e2(param_1);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat(__dest,local_78,100);
  FUN_001024ba(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020a8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102340(param_1,param_2);
  return;
}




void FUN_00102126(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001024a2(void)

{
  return 0x555555555555555;
}




void FUN_00102717(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cc4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101c54(param_1);
  FUN_00101a00(param_1);
  return;
}




void FUN_00102ca5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00102696(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001029d0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_00102490(undefined8 param_1)

{
  return param_1;
}




void FUN_00102422(undefined8 param_1)

{
  FUN_00102490(param_1);
  return;
}




void FUN_00101a76(undefined8 param_1)

{
  FUN_00101ad6(param_1);
  return;
}




undefined8 FUN_00101dfe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102126(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029f1(void)

{
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101a76(param_1);
  return;
}




void FUN_00101b22(undefined8 param_1)

{
  FUN_00101c84(param_1);
  FUN_00101a56(param_1);
  return;
}




void FUN_0010263c(undefined4 param_1)

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




void FUN_00101c74(void)

{
  return;
}




void FUN_001015e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101640(param_1);
  FUN_0010168c(&local_18);
  FUN_001016b0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019e9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022a2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102211(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101b02(undefined8 param_1)

{
  FUN_00101c74(param_1);
  return;
}




void FUN_001023de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f73(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019e9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101c84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016f0(local_20);
    uVar3 = FUN_00101f08(param_1);
    FUN_00101f1a(uVar3,uVar2);
    FUN_00101f44(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_0010218e(undefined8 *param_1)

{
  FUN_00102354(*param_1);
  return;
}




void FUN_0010253a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a75(void)

{
  return;
}




undefined8 FUN_00101640(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024e0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001025e6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001029fc(void)

{
  return;
}




void FUN_00102a5f(void)

{
  return;
}




void FUN_001026be(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101730(undefined8 param_1)

{
  return param_1;
}




void FUN_00102211(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102376(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f73(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010207a(undefined8 param_1,undefined8 param_2)

{
  FUN_001020a8(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101d63(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010207a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001020e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020d2(param_2);
  FUN_001020a8(param_1,uVar1);
  FUN_00101a00(param_1);
  return;
}




void FUN_00102a33(void)

{
  return;
}




void FUN_00102a28(void)

{
  return;
}




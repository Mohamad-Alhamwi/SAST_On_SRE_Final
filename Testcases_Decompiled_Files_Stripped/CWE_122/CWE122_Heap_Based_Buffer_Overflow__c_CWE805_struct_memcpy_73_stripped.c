
undefined8 FUN_00101df6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010155d(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101632(param_1);
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00102759(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a98(undefined8 param_1)

{
  FUN_00101b44(param_1);
  return;
}




void FUN_00102240(void)

{
  return;
}




void FUN_00101af8(undefined8 param_1)

{
  FUN_00101b64(param_1);
  return;
}




void FUN_0010278c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101f4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a54(void)

{
  return;
}




void FUN_00102acd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101fc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102286(param_1);
  uVar2 = FUN_00101f4a(param_1);
  FUN_001022aa(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fb5(param_2);
  uVar4 = FUN_00101740(uVar1);
  FUN_00102323(uVar2,uVar4,uVar3);
  FUN_00102360(local_38,0);
  FUN_001022e4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a75(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102628(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102286(undefined8 param_1)

{
  FUN_001023df(param_1,1);
  return;
}




void FUN_00102168(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102253(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023b8(param_1,param_2,param_3);
  return;
}




void FUN_00101762(undefined8 param_1)

{
  FUN_00101780(param_1);
  return;
}




void FUN_00102a33(void)

{
  return;
}




void FUN_00102a07(void)

{
  return;
}




undefined8 * FUN_001021ac(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001023b8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102aac(void)

{
  return;
}




undefined8 FUN_00101e40(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102168(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a28(void)

{
  return;
}




void FUN_00101cb6(void)

{
  return;
}




void FUN_0010272b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102c4f(undefined8 *param_1)

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




void FUN_001025fd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101780(undefined8 param_1)

{
  return param_1;
}




void FUN_00102653(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102ce7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001024d2(undefined8 param_1)

{
  return param_1;
}




void FUN_001024fc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001026d8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cc6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101740(local_20);
    uVar3 = FUN_00101f4a(param_1);
    FUN_00101f5c(uVar3,uVar2);
    FUN_00101f86(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101489(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101632(param_1);
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  FUN_00102759(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d06(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001018a4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad8(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 00101903 to 00101940 has its CatchHandler @ 0010198c */
  FUN_00101b90(local_58,&local_60);
  FUN_00101b90(local_58,&local_60);
  FUN_00101b90(local_58,&local_60);
  FUN_00101bca(local_38,local_58);
                    /* try { // try from 00101948 to 0010194c has its CatchHandler @ 00101977 */
  FUN_0010155d(local_38);
  FUN_00101af8(local_38);
  FUN_00101af8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010240d(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a3e(void)

{
  return;
}




void FUN_001021d0(undefined8 *param_1)

{
  FUN_00102396(*param_1);
  return;
}




void FUN_00101792(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad8(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017f1 to 0010182e has its CatchHandler @ 0010187a */
  FUN_00101b90(local_58,&local_60);
  FUN_00101b90(local_58,&local_60);
  FUN_00101b90(local_58,&local_60);
  FUN_00101bca(local_38,local_58);
                    /* try { // try from 00101836 to 0010183a has its CatchHandler @ 00101865 */
  FUN_00101489(local_38);
  FUN_00101af8(local_38);
  FUN_00101af8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c96(undefined8 param_1)

{
  FUN_00101f3a(param_1);
  return;
}




void FUN_00102a80(void)

{
  return;
}




void FUN_00101b18(undefined8 param_1)

{
  FUN_00101c96(param_1);
  FUN_00101a42(param_1);
  return;
}




void FUN_001022aa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010240d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101a62(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102700(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  FUN_00101a62(param_1);
  return;
}




undefined8 FUN_00101a2b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ad8(undefined8 param_1)

{
  FUN_00101ab8(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




long * FUN_001016dc(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102a96(void)

{
  return;
}




void FUN_00102464(undefined8 param_1)

{
  FUN_001024d2(param_1);
  return;
}




ulong FUN_001027ec(long param_1,ulong param_2,long param_3)

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




void FUN_001021f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fb5(param_2);
  uVar2 = FUN_00101690(param_1);
  FUN_00101d44(param_1,uVar2,uVar1);
  return;
}




void FUN_001025a8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101690(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101722(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




void FUN_00101b64(undefined8 param_1)

{
  FUN_00101cc6(param_1);
  FUN_00101a98(param_1);
  return;
}




void FUN_00101b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101690(param_1);
  FUN_00101d44(param_1,uVar1,param_2);
  return;
}




void FUN_001019b6(void)

{
  FUN_001018a4();
  return;
}




undefined8 FUN_00101da5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020bc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a8b(void)

{
  return;
}




undefined8 FUN_001029de(void)

{
  return 0;
}




void FUN_00102aa1(void)

{
  return;
}




undefined8 FUN_00101e90(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102168(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010267e(undefined4 param_1)

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




void FUN_00102cc8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fb5(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fc8(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102092(param_1,1);
  return;
}




void FUN_001020ea(undefined8 param_1,undefined8 param_2)

{
  FUN_00102382(param_1,param_2);
  return;
}




void FUN_00102126(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102114(param_2);
  FUN_001020ea(param_1,uVar1);
  FUN_00101a42(param_1);
  return;
}




undefined8 FUN_00101fb5(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a6a(void)

{
  return;
}




long FUN_00102360(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




bool FUN_00102bd1(pthread_t *param_1)

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




undefined8 FUN_001020bc(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ea(param_1,param_2);
  return param_1;
}




void FUN_00102482(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024e4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




int FUN_001029ed(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101700(undefined8 *param_1)

{
  FUN_00101740(*param_1);
  return;
}




void FUN_00101f3a(void)

{
  return;
}




void FUN_00101f86(undefined8 param_1,undefined8 param_2)

{
  FUN_00102253(param_1,param_2,1);
  return;
}




void FUN_00102396(long param_1)

{
  FUN_00102464(param_1 + 0x10);
  return;
}




void FUN_001025d2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ac2(void)

{
  return;
}




void FUN_00102d40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102ab7(void)

{
  return;
}




undefined8 FUN_00102b04(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102acd,local_18);
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




void FUN_00102554(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102759(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101632(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101690(param_1);
  FUN_001016dc(&local_18);
  FUN_00101700(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102382(void)

{
  return;
}




void FUN_00102323(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fb5(param_3);
  FUN_00102420(param_1,param_2,uVar1);
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101cb6(param_1);
  return;
}




void FUN_00101bca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101df6(param_2);
  FUN_00101da5(&local_21,uVar1);
  FUN_00101e08(param_1,&local_21);
  FUN_00101b44(&local_21);
  uVar1 = FUN_00101e90(param_2);
  uVar2 = FUN_00101e40(param_2);
                    /* try { // try from 00101c56 to 00101c5a has its CatchHandler @ 00101c5d */
  FUN_00101edc(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001028f0(long param_1,ulong param_2,long param_3)

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




void FUN_00102522(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101722(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102db0(void)

{
  return;
}




void FUN_00101ab8(undefined8 param_1)

{
  FUN_00101b18(param_1);
  return;
}




undefined8 FUN_00102186(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001022e4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102253(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102092(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fb5(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a2b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a5f(void)

{
  return;
}




void FUN_00101740(long param_1)

{
  FUN_00101762(param_1 + 0x10);
  return;
}




void FUN_001023df(undefined8 param_1,undefined8 param_2)

{
  FUN_00102482(param_1,param_2,0);
  return;
}




undefined8 FUN_001024e4(void)

{
  return 0x555555555555555;
}




undefined8 FUN_001029cf(void)

{
  return 1;
}




void FUN_00102a49(void)

{
  return;
}




void FUN_0010257c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001019c6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024fc("Calling good()...");
  FUN_001019b6();
  FUN_001024fc("Finished good()");
  FUN_001024fc("Calling bad()...");
  FUN_00101792();
  FUN_001024fc("Finished bad()");
  return 0;
}




undefined8 FUN_00102114(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102114(param_2);
  FUN_00102126(param_1,uVar1);
  return;
}




void FUN_00101edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102186(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021d0(&local_18);
    FUN_001021f2(local_10,uVar2);
    FUN_001021ac(&local_18);
  }
  return;
}




void FUN_00101f5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102240(param_1,param_2);
  return;
}




void FUN_00102a1d(void)

{
  return;
}




void FUN_00102a12(void)

{
  return;
}




undefined8 FUN_00102c2c(void *param_1)

{
  free(param_1);
  return 1;
}




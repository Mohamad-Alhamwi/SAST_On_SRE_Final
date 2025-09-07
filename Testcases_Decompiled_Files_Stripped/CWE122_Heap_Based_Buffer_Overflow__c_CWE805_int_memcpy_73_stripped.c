
undefined8 FUN_00101da0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101532(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015dc(param_1);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  FUN_001024fe(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  FUN_00101aee(param_1);
  return;
}




void FUN_001021ea(void)

{
  return;
}




void FUN_00101aa2(undefined8 param_1)

{
  FUN_00101b0e(param_1);
  return;
}




void FUN_00102736(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101ef4(undefined8 param_1)

{
  return param_1;
}




void FUN_001029fe(void)

{
  return;
}




void FUN_00102a77(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101f72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102230(param_1);
  uVar2 = FUN_00101ef4(param_1);
  FUN_00102254(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f5f(param_2);
  uVar4 = FUN_001016ea(uVar1);
  FUN_001022cd(uVar2,uVar4,uVar3);
  FUN_0010230a(local_38,0);
  FUN_0010228e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a1f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_001025d2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102230(undefined8 param_1)

{
  FUN_00102389(param_1,1);
  return;
}




void FUN_00102112(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001021fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102362(param_1,param_2,param_3);
  return;
}




void FUN_0010170c(undefined8 param_1)

{
  FUN_0010172a(param_1);
  return;
}




void FUN_001029dd(void)

{
  return;
}




void FUN_001029b1(void)

{
  return;
}




undefined8 * FUN_00102156(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102362(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a56(void)

{
  return;
}




undefined8 FUN_00101dea(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102112(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029d2(void)

{
  return;
}




void FUN_00101c60(void)

{
  return;
}




void FUN_001026d5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102bf9(undefined8 *param_1)

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




void FUN_001025a7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010172a(undefined8 param_1)

{
  return param_1;
}




void FUN_001025fd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c91(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010247c(undefined8 param_1)

{
  return param_1;
}




void FUN_001024a6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102682(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016ea(local_20);
    uVar3 = FUN_00101ef4(param_1);
    FUN_00101f06(uVar3,uVar2);
    FUN_00101f30(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015dc(param_1);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  FUN_001024fe(*__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cb0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010184e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a82(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018ad to 001018ea has its CatchHandler @ 00101936 */
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b74(local_38,local_58);
                    /* try { // try from 001018f2 to 001018f6 has its CatchHandler @ 00101921 */
  FUN_00101532(local_38);
  FUN_00101aa2(local_38);
  FUN_00101aa2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023b7(undefined8 param_1)

{
  return param_1;
}




void FUN_001029e8(void)

{
  return;
}




void FUN_0010217a(undefined8 *param_1)

{
  FUN_00102340(*param_1);
  return;
}




void FUN_0010173c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a82(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(200);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 0010179b to 001017d8 has its CatchHandler @ 00101824 */
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b3a(local_58,&local_60);
  FUN_00101b74(local_38,local_58);
                    /* try { // try from 001017e0 to 001017e4 has its CatchHandler @ 0010180f */
  FUN_00101489(local_38);
  FUN_00101aa2(local_38);
  FUN_00101aa2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c40(undefined8 param_1)

{
  FUN_00101ee4(param_1);
  return;
}




void FUN_00102a2a(void)

{
  return;
}




void FUN_00101ac2(undefined8 param_1)

{
  FUN_00101c40(param_1);
  FUN_001019ec(param_1);
  return;
}




void FUN_00102254(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023b7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101a0c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001026aa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001019ec(undefined8 param_1)

{
  FUN_00101a0c(param_1);
  return;
}




undefined8 FUN_001019d5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a82(undefined8 param_1)

{
  FUN_00101a62(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




long * FUN_00101686(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102a40(void)

{
  return;
}




void FUN_0010240e(undefined8 param_1)

{
  FUN_0010247c(param_1);
  return;
}




ulong FUN_00102796(long param_1,ulong param_2,long param_3)

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




void FUN_0010219c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f5f(param_2);
  uVar2 = FUN_0010163a(param_1);
  FUN_00101cee(param_1,uVar2,uVar1);
  return;
}




void FUN_00102552(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010163a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016cc(&local_18,param_1);
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




void FUN_00101b0e(undefined8 param_1)

{
  FUN_00101c70(param_1);
  FUN_00101a42(param_1);
  return;
}




void FUN_00101b3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010163a(param_1);
  FUN_00101cee(param_1,uVar1,param_2);
  return;
}




void FUN_00101960(void)

{
  FUN_0010184e();
  return;
}




undefined8 FUN_00101d4f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102066(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a35(void)

{
  return;
}




undefined8 FUN_00102988(void)

{
  return 0;
}




void FUN_00102a4b(void)

{
  return;
}




undefined8 FUN_00101e3a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102112(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102628(undefined4 param_1)

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




void FUN_00102c72(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101cee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f5f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f72(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010203c(param_1,1);
  return;
}




void FUN_00102094(undefined8 param_1,undefined8 param_2)

{
  FUN_0010232c(param_1,param_2);
  return;
}




void FUN_001020d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020be(param_2);
  FUN_00102094(param_1,uVar1);
  FUN_001019ec(param_1);
  return;
}




undefined8 FUN_00101f5f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a14(void)

{
  return;
}




long FUN_0010230a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




bool FUN_00102b7b(pthread_t *param_1)

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




undefined8 FUN_00102066(undefined8 param_1,undefined8 param_2)

{
  FUN_00102094(param_1,param_2);
  return param_1;
}




void FUN_0010242c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010248e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




int FUN_00102997(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016aa(undefined8 *param_1)

{
  FUN_001016ea(*param_1);
  return;
}




void FUN_00101ee4(void)

{
  return;
}




void FUN_00101f30(undefined8 param_1,undefined8 param_2)

{
  FUN_001021fd(param_1,param_2,1);
  return;
}




void FUN_00102340(long param_1)

{
  FUN_0010240e(param_1 + 0x10);
  return;
}




void FUN_0010257c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a6c(void)

{
  return;
}




void FUN_00102ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102a61(void)

{
  return;
}




undefined8 FUN_00102aae(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a77,local_18);
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




void FUN_001024fe(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102703(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015dc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010163a(param_1);
  FUN_00101686(&local_18);
  FUN_001016aa(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010232c(void)

{
  return;
}




void FUN_001022cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f5f(param_3);
  FUN_001023ca(param_1,param_2,uVar1);
  return;
}




void FUN_00101aee(undefined8 param_1)

{
  FUN_00101c60(param_1);
  return;
}




void FUN_00101b74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101da0(param_2);
  FUN_00101d4f(&local_21,uVar1);
  FUN_00101db2(param_1,&local_21);
  FUN_00101aee(&local_21);
  uVar1 = FUN_00101e3a(param_2);
  uVar2 = FUN_00101dea(param_2);
                    /* try { // try from 00101c00 to 00101c04 has its CatchHandler @ 00101c07 */
  FUN_00101e86(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010289a(long param_1,ulong param_2,long param_3)

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




void FUN_001024cc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001016cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102d50(void)

{
  return;
}




void FUN_00101a62(undefined8 param_1)

{
  FUN_00101ac2(param_1);
  return;
}




undefined8 FUN_00102130(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010228e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021fd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010203c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001023ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f5f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019d5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a09(void)

{
  return;
}




void FUN_001016ea(long param_1)

{
  FUN_0010170c(param_1 + 0x10);
  return;
}




void FUN_00102389(undefined8 param_1,undefined8 param_2)

{
  FUN_0010242c(param_1,param_2,0);
  return;
}




undefined8 FUN_0010248e(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00102979(void)

{
  return 1;
}




void FUN_001029f3(void)

{
  return;
}




void FUN_00102526(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101970(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024a6("Calling good()...");
  FUN_00101960();
  FUN_001024a6("Finished good()");
  FUN_001024a6("Calling bad()...");
  FUN_0010173c();
  FUN_001024a6("Finished bad()");
  return 0;
}




undefined8 FUN_001020be(undefined8 param_1)

{
  return param_1;
}




void FUN_00101db2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020be(param_2);
  FUN_001020d0(param_1,uVar1);
  return;
}




void FUN_00101e86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102130(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010217a(&local_18);
    FUN_0010219c(local_10,uVar2);
    FUN_00102156(&local_18);
  }
  return;
}




void FUN_00101f06(undefined8 param_1,undefined8 param_2)

{
  FUN_001021ea(param_1,param_2);
  return;
}




void FUN_001029c7(void)

{
  return;
}




void FUN_001029bc(void)

{
  return;
}




undefined8 FUN_00102bd6(void *param_1)

{
  free(param_1);
  return 1;
}




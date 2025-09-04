
undefined8 FUN_00101f3a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101624(undefined8 param_1)

{
  FUN_00101642(param_1);
  return;
}




void FUN_00101b54(undefined8 param_1)

{
  FUN_00101cb6(param_1);
  FUN_00101a88(param_1);
  return;
}




long FUN_00102350(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c86(undefined8 param_1)

{
  FUN_00101f2a(param_1);
  return;
}




void FUN_001029f7(void)

{
  return;
}




undefined8 FUN_001020ac(undefined8 param_1,undefined8 param_2)

{
  FUN_001020da(param_1,param_2);
  return param_1;
}




void FUN_00102a86(void)

{
  return;
}




void FUN_00102cd7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102158(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102aa7(void)

{
  return;
}




void FUN_001015c2(undefined8 *param_1)

{
  FUN_00101602(*param_1);
  return;
}




void FUN_00102749(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102386(long param_1)

{
  FUN_00102454(param_1 + 0x10);
  return;
}




void FUN_00102243(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023a8(param_1,param_2,param_3);
  return;
}




void FUN_00102372(void)

{
  return;
}




undefined8 FUN_00101a1c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a65(void)

{
  return;
}




void FUN_00102a39(void)

{
  return;
}




void FUN_0010229a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023fd(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001024c2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c1c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f76(undefined8 param_1,undefined8 param_2)

{
  FUN_00102243(param_1,param_2,1);
  return;
}




void FUN_00102a5a(void)

{
  return;
}




undefined8 FUN_00101e30(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102158(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029ce(void)

{
  return 0;
}




void FUN_0010271b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a32(undefined8 param_1)

{
  FUN_00101a52(param_1);
  return;
}




void FUN_0010277c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102598(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001025ed(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001028e0(long param_1,ulong param_2,long param_3)

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




void FUN_0010149b(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f4(param_1);
  free((void *)*puVar1);
  return;
}




undefined8 FUN_00101e80(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102158(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101602(long param_1)

{
  FUN_00101624(param_1 + 0x10);
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101b34(param_1);
  return;
}




void FUN_001024ec(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a70(void)

{
  return;
}




void FUN_001022d4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102243(*param_1,param_1[1],1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101a52(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102104(param_2);
  FUN_00102116(param_1,uVar1);
  return;
}




void FUN_00102ab2(void)

{
  return;
}




void FUN_00101ca6(void)

{
  return;
}




void FUN_001023a8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101b34(undefined8 param_1)

{
  FUN_00101ca6(param_1);
  return;
}




undefined8 FUN_001029bf(void)

{
  return 1;
}




void FUN_00101b08(undefined8 param_1)

{
  FUN_00101c86(param_1);
  FUN_00101a32(param_1);
  return;
}




void FUN_00101ae8(undefined8 param_1)

{
  FUN_00101b54(param_1);
  return;
}




void FUN_00101bba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101de6(param_2);
  FUN_00101d95(&local_21,uVar1);
  FUN_00101df8(param_1,&local_21);
  FUN_00101b34(&local_21);
  uVar1 = FUN_00101e80(param_2);
  uVar2 = FUN_00101e30(param_2);
                    /* try { // try from 00101c46 to 00101c4a has its CatchHandler @ 00101c4d */
  FUN_00101ecc(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_0010159e(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101772(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac8(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017d1 to 0010180e has its CatchHandler @ 0010185a */
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101bba(local_38,local_58);
                    /* try { // try from 00101816 to 0010181a has its CatchHandler @ 00101845 */
  FUN_0010149b(local_38);
  FUN_00101ae8(local_38);
  FUN_00101ae8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101552(param_1);
  FUN_0010159e(&local_18);
  FUN_001015c2(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102af4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102abd,local_18);
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




void FUN_00102544(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a02(void)

{
  return;
}




void FUN_00102313(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa5(param_3);
  FUN_00102410(param_1,param_2,uVar1);
  return;
}




void FUN_001026c8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101654(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac8(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_60);
                    /* try { // try from 001016bf to 001016fc has its CatchHandler @ 00101748 */
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101bba(local_38,local_58);
                    /* try { // try from 00101704 to 00101708 has its CatchHandler @ 00101733 */
  FUN_00101469(local_38);
  FUN_00101ae8(local_38);
  FUN_00101ae8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f4(param_1);
  free((void *)*puVar1);
  return;
}




void FUN_001015e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fa5(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fb8(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102082(param_1,1);
  return;
}




undefined8 FUN_00101d95(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020ac(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101aa8(undefined8 param_1)

{
  FUN_00101b08(param_1);
  return;
}




void FUN_00101f2a(void)

{
  return;
}




void FUN_00102abd(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a23(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102bc1(pthread_t *param_1)

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




undefined8 FUN_00101fa5(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001027dc(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101552(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015e4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102176(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021c0(&local_18);
    FUN_001021e2(local_10,uVar2);
    FUN_0010219c(&local_18);
  }
  return;
}




void FUN_001021c0(undefined8 *param_1)

{
  FUN_00102386(*param_1);
  return;
}




void FUN_00102230(void)

{
  return;
}




void FUN_00102116(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102104(param_2);
  FUN_001020da(param_1,uVar1);
  FUN_00101a32(param_1);
  return;
}




void FUN_00102a9c(void)

{
  return;
}




void FUN_00102410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fa5(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a1c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102d30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 * FUN_0010219c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010256c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a2e(void)

{
  return;
}




void FUN_00101884(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac8(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_60);
                    /* try { // try from 001018ef to 0010192c has its CatchHandler @ 00101978 */
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101b80(local_58,&local_60);
  FUN_00101bba(local_38,local_58);
                    /* try { // try from 00101934 to 00101938 has its CatchHandler @ 00101963 */
  FUN_001014cd(local_38);
  FUN_00101ae8(local_38);
  FUN_00101ae8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102082(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102104(undefined8 param_1)

{
  return param_1;
}




void FUN_00102472(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024d4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026f0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102cb8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102c3f(undefined8 *param_1)

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




void FUN_00102cf6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102643(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_001029dd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101642(undefined8 param_1)

{
  return param_1;
}




void FUN_00102454(undefined8 param_1)

{
  FUN_001024c2(param_1);
  return;
}




undefined8 FUN_001023fd(undefined8 param_1)

{
  return param_1;
}




void FUN_00101cb6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101602(local_20);
    uVar3 = FUN_00101f3a(param_1);
    FUN_00101f4c(uVar3,uVar2);
    FUN_00101f76(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101de6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0d(void)

{
  return;
}




void FUN_00102618(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001019a2(void)

{
  FUN_00101772();
  FUN_00101884();
  return;
}




void FUN_00101b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101552(param_1);
  FUN_00101d34(param_1,uVar1,param_2);
  return;
}




void FUN_00102276(undefined8 param_1)

{
  FUN_001023cf(param_1,1);
  return;
}




void FUN_001023cf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102472(param_1,param_2,0);
  return;
}




undefined8 FUN_00102176(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102512(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a91(void)

{
  return;
}




undefined8 FUN_001019b7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024ec("Calling good()...");
  FUN_001019a2();
  FUN_001024ec("Finished good()");
  FUN_001024ec("Calling bad()...");
  FUN_00101654();
  FUN_001024ec("Finished bad()");
  return 0;
}




undefined8 FUN_001024d4(void)

{
  return 0x555555555555555;
}




void FUN_001025c2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a18(void)

{
  return;
}




void FUN_00102a7b(void)

{
  return;
}




void FUN_0010266e(undefined4 param_1)

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




void FUN_00101ac8(undefined8 param_1)

{
  FUN_00101aa8(param_1);
  return;
}




void FUN_001014cd(undefined8 param_1)

{
  FUN_001014f4(param_1);
  return;
}




void FUN_001021e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fa5(param_2);
  uVar2 = FUN_00101552(param_1);
  FUN_00101d34(param_1,uVar2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101f4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102230(param_1,param_2);
  return;
}




undefined8 FUN_00101fb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102276(param_1);
  uVar2 = FUN_00101f3a(param_1);
  FUN_0010229a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fa5(param_2);
  uVar4 = FUN_00101602(uVar1);
  FUN_00102313(uVar2,uVar4,uVar3);
  FUN_00102350(local_38,0);
  FUN_001022d4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001020da(undefined8 param_1,undefined8 param_2)

{
  FUN_00102372(param_1,param_2);
  return;
}




void FUN_00102a4f(void)

{
  return;
}




void FUN_00102a44(void)

{
  return;
}




void FUN_00102da0(void)

{
  return;
}




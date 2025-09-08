
undefined8 * FUN_00102036(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101962(undefined8 param_1)

{
  FUN_00101942(param_1);
  return;
}




void FUN_00101d66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102010(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010205a(&local_18);
    FUN_0010207c(local_10,uVar2);
    FUN_00102036(&local_18);
  }
  return;
}




void FUN_001023ac(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101de6(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ca(param_1,param_2);
  return;
}




void FUN_00102915(void)

{
  return;
}




void FUN_00102134(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102297(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102b90(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001015b0(undefined8 *param_1)

{
  FUN_001015f0(*param_1);
  return;
}




void FUN_0010220c(void)

{
  return;
}




void FUN_00101449(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014e2(param_1);
  __ptr = (undefined4 *)*puVar1;
  *__ptr = 5;
  FUN_001023de(*__ptr);
  free(__ptr);
  return;
}




void FUN_001018ec(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001028c8(void)

{
  return;
}




void FUN_00102406(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




long * FUN_0010158c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001022ee(undefined8 param_1)

{
  FUN_0010235c(param_1);
  return;
}




void FUN_001023de(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101dc4(param_1);
  return;
}




undefined8 FUN_00102ad9(undefined8 *param_1)

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




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102957(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010235c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102562(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010207c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e3f(param_2);
  uVar2 = FUN_00101540(param_1);
  FUN_00101bce(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101540(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ab6(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101f9e(undefined8 param_1)

{
  return param_1;
}




void FUN_001028ff(void)

{
  return;
}




void FUN_001028bd(void)

{
  return;
}




void FUN_00101b40(void)

{
  return;
}




void FUN_001028d3(void)

{
  return;
}




ulong FUN_0010277a(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102868(void)

{
  return 0;
}




void FUN_001028e9(void)

{
  return;
}




void FUN_00101741(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101962(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(4);
                    /* try { // try from 0010178d to 001017ca has its CatchHandler @ 00101816 */
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a54(local_38,local_58);
                    /* try { // try from 001017d2 to 001017d6 has its CatchHandler @ 00101801 */
  FUN_00101492(local_38);
  FUN_00101982(local_38);
  FUN_00101982(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f9e(param_2);
  FUN_00101f74(param_1,uVar1);
  FUN_001018cc(param_1);
  return;
}




void FUN_00101942(undefined8 param_1)

{
  FUN_001019a2(param_1);
  return;
}




void FUN_00101bce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e3f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e52(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f1c(param_1,1);
  return;
}




void FUN_001025b5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102b52(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_0010236e(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101612(undefined8 param_1)

{
  FUN_00101630(param_1);
  return;
}




void FUN_00101b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001015f0(local_20);
    uVar3 = FUN_00101dd4(param_1);
    FUN_00101de6(uVar3,uVar2);
    FUN_00101e10(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101f74(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220c(param_1,param_2);
  return;
}




void FUN_001015d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101e10(undefined8 param_1,undefined8 param_2)

{
  FUN_001020dd(param_1,param_2,1);
  return;
}




void FUN_00102432(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101d1a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028f4(void)

{
  return;
}




undefined8 FUN_00101cca(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f9e(param_2);
  FUN_00101fb0(param_1,uVar1);
  return;
}




undefined8 FUN_00101dd4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101492(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014e2(param_1);
  __ptr = (undefined4 *)*puVar1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 5;
    FUN_001023de(*__ptr);
    free(__ptr);
  }
  return;
}




void FUN_001018cc(undefined8 param_1)

{
  FUN_001018ec(param_1);
  return;
}




void FUN_001019ce(undefined8 param_1)

{
  FUN_00101b40(param_1);
  return;
}




undefined8 FUN_00101850(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102386("Calling good()...");
  FUN_00101840();
  FUN_00102386("Finished good()");
  FUN_00102386("Calling bad()...");
  FUN_00101642();
  FUN_00102386("Finished bad()");
  return 0;
}




void FUN_00102616(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102920(void)

{
  return;
}




void FUN_00102386(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001028a7(void)

{
  return;
}




void FUN_001019a2(undefined8 param_1)

{
  FUN_00101b20(param_1);
  FUN_001018cc(param_1);
  return;
}




void FUN_00101642(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101962(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(4);
                    /* try { // try from 0010168e to 001016cb has its CatchHandler @ 00101717 */
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a1a(local_58,&local_60);
  FUN_00101a54(local_38,local_58);
                    /* try { // try from 001016d3 to 001016d7 has its CatchHandler @ 00101702 */
  FUN_00101449(local_38);
  FUN_00101982(local_38);
  FUN_00101982(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101922(undefined8 param_1)

{
  FUN_001019ce(param_1);
  return;
}




undefined8 FUN_00101e52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102110(param_1);
  uVar2 = FUN_00101dd4(param_1);
  FUN_00102134(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e3f(param_2);
  uVar4 = FUN_001015f0(uVar1);
  FUN_001021ad(uVar2,uVar4,uVar3);
  FUN_001021ea(local_38,0);
  FUN_0010216e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101f1c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101c2f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f46(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102010(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102941(void)

{
  return;
}




void FUN_001015f0(long param_1)

{
  FUN_00101612(param_1 + 0x10);
  return;
}




void FUN_001020ca(void)

{
  return;
}




void FUN_001028de(void)

{
  return;
}




undefined8 FUN_001018b5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ff2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102269(undefined8 param_1,undefined8 param_2)

{
  FUN_0010230c(param_1,param_2,0);
  return;
}




void FUN_001022aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e3f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018b5(8,param_2);
  *puVar2 = uVar1;
  return;
}




long FUN_001021ea(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102c30(void)

{
  return;
}




void FUN_001024b2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102242(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




ulong FUN_00102676(long param_1,ulong param_2,long param_3)

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




void FUN_0010294c(void)

{
  return;
}




void FUN_001019ee(undefined8 param_1)

{
  FUN_00101b50(param_1);
  FUN_00101922(param_1);
  return;
}




void FUN_00102110(undefined8 param_1)

{
  FUN_00102269(param_1,1);
  return;
}




void FUN_001021ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e3f(param_3);
  FUN_001022aa(param_1,param_2,uVar1);
  return;
}




void FUN_00102508(undefined4 param_1)

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




void FUN_001028b2(void)

{
  return;
}




void FUN_00102891(void)

{
  return;
}




void FUN_0010290a(void)

{
  return;
}




void FUN_00101982(undefined8 param_1)

{
  FUN_001019ee(param_1);
  return;
}




void FUN_001014e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101540(param_1);
  FUN_0010158c(&local_18);
  FUN_001015b0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102487(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024dd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101e3f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f46(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f74(param_1,param_2);
  return param_1;
}




void FUN_0010292b(void)

{
  return;
}




int FUN_00102877(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101a1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101540(param_1);
  FUN_00101bce(param_1,uVar1,param_2);
  return;
}




void FUN_00101dc4(void)

{
  return;
}




void FUN_0010230c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010236e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010245c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102220(long param_1)

{
  FUN_001022ee(param_1 + 0x10);
  return;
}




void FUN_001025e3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00102bc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c80(param_2);
  FUN_00101c2f(&local_21,uVar1);
  FUN_00101c92(param_1,&local_21);
  FUN_001019ce(&local_21);
  uVar1 = FUN_00101d1a(param_2);
  uVar2 = FUN_00101cca(param_2);
                    /* try { // try from 00101ae0 to 00101ae4 has its CatchHandler @ 00101ae7 */
  FUN_00101d66(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010258a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102859(void)

{
  return 1;
}




void FUN_00102936(void)

{
  return;
}




void FUN_00102b71(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_0010289c(void)

{
  return;
}




undefined8 FUN_00101c80(undefined8 param_1)

{
  return param_1;
}




void FUN_00101840(void)

{
  FUN_00101741();
  return;
}




undefined8 FUN_00102297(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101630(undefined8 param_1)

{
  return param_1;
}




void FUN_0010205a(undefined8 *param_1)

{
  FUN_00102220(*param_1);
  return;
}




void FUN_001020dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102242(param_1,param_2,param_3);
  return;
}




void FUN_0010216e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001020dd(*param_1,param_1[1],1);
  }
  return;
}




bool FUN_00102a5b(pthread_t *param_1)

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




undefined8 FUN_0010298e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102957,local_18);
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





void FUN_00102060(undefined8 *param_1)

{
  FUN_00102226(*param_1);
  return;
}




void FUN_00101988(undefined8 param_1)

{
  FUN_001019f4(param_1);
  return;
}




void FUN_00101dca(void)

{
  return;
}




void FUN_001023e4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e16(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e3(param_1,param_2,1);
  return;
}




void FUN_00102926(void)

{
  return;
}




void FUN_0010295d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102174(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001020e3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102c40(void)

{
  return;
}




void FUN_001015d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102226(long param_1)

{
  FUN_001022f4(param_1 + 0x10);
  return;
}




void FUN_00101495(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014e8(param_1);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_00102462(*puVar1);
    free(puVar1);
  }
  return;
}




void FUN_00101928(undefined8 param_1)

{
  FUN_001019d4(param_1);
  return;
}




void FUN_001028d9(void)

{
  return;
}




void FUN_00102438(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001015b6(undefined8 *param_1)

{
  FUN_001015f6(*param_1);
  return;
}




void FUN_00102312(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102374(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010240c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b46(void)

{
  return;
}




void FUN_00102b77(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101449(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014e8(param_1);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_00102462(*puVar1);
  free(puVar1);
  return;
}




bool FUN_00102a61(pthread_t *param_1)

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




undefined8 FUN_00102374(void)

{
  return 0x555555555555555;
}




void FUN_00102590(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001020d0(void)

{
  return;
}




long * FUN_00101592(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102b58(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101fb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa4(param_2);
  FUN_00101f7a(param_1,uVar1);
  FUN_001018d2(param_1);
  return;
}




void FUN_00102910(void)

{
  return;
}




void FUN_001028ce(void)

{
  return;
}




void FUN_00101b56(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001015f6(local_20);
    uVar3 = FUN_00101dda(param_1);
    FUN_00101dec(uVar3,uVar2);
    FUN_00101e16(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001028e4(void)

{
  return;
}




undefined8 FUN_0010285f(void)

{
  return 1;
}




int FUN_0010287d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001028fa(void)

{
  return;
}




void FUN_00101846(void)

{
  FUN_00101747();
  return;
}




void FUN_00101ff8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101968(undefined8 param_1)

{
  FUN_00101948(param_1);
  return;
}




undefined8 FUN_00101c35(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f4c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001025e9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b96(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010238c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
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




undefined8 FUN_00101636(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e45(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e58(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f22(param_1,1);
  return;
}




undefined8 FUN_00101fa4(undefined8 param_1)

{
  return param_1;
}




void FUN_001015f6(long param_1)

{
  FUN_00101618(param_1 + 0x10);
  return;
}




undefined8 FUN_00101e45(undefined8 param_1)

{
  return param_1;
}




void FUN_00102462(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102016(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102060(&local_18);
    FUN_00102082(local_10,uVar2);
    FUN_0010203c(&local_18);
  }
  return;
}




void FUN_00102905(void)

{
  return;
}




undefined8 FUN_00101d20(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cd0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ff8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dec(undefined8 param_1,undefined8 param_2)

{
  FUN_001020d0(param_1,param_2);
  return;
}




void FUN_001014e8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101546(param_1);
  FUN_00101592(&local_18);
  FUN_001015b6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018f2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001019f4(undefined8 param_1)

{
  FUN_00101b56(param_1);
  FUN_00101928(param_1);
  return;
}




undefined8 FUN_001018bb(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_0010267c(long param_1,ulong param_2,long param_3)

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




void FUN_00102931(void)

{
  return;
}




void FUN_001023b2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001028b8(void)

{
  return;
}




void FUN_001019d4(undefined8 param_1)

{
  FUN_00101b46(param_1);
  return;
}




void FUN_00101747(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101968(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(8);
                    /* try { // try from 00101793 to 001017d0 has its CatchHandler @ 0010181c */
  FUN_00101a20(local_58,&local_60);
  FUN_00101a20(local_58,&local_60);
  FUN_00101a20(local_58,&local_60);
  FUN_00101a5a(local_38,local_58);
                    /* try { // try from 001017d8 to 001017dc has its CatchHandler @ 00101807 */
  FUN_00101495(local_38);
  FUN_00101988(local_38);
  FUN_00101988(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101948(undefined8 param_1)

{
  FUN_001019a8(param_1);
  return;
}




void FUN_00101f22(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00101f4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f7a(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101c86(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_0010203c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102952(void)

{
  return;
}




void FUN_00101618(undefined8 param_1)

{
  FUN_00101636(param_1);
  return;
}




void FUN_001020e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102248(param_1,param_2,param_3);
  return;
}




void FUN_001028ef(void)

{
  return;
}




void FUN_001018d2(undefined8 param_1)

{
  FUN_001018f2(param_1);
  return;
}




undefined8 FUN_00102016(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_0010229d(undefined8 param_1)

{
  return param_1;
}




void FUN_001022f4(undefined8 param_1)

{
  FUN_00102362(param_1);
  return;
}




void FUN_00102212(void)

{
  return;
}




void FUN_001024e3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010226f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102312(param_1,param_2,0);
  return;
}




ulong FUN_00102780(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102994(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010295d,local_18);
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




void FUN_00101a20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101546(param_1);
  FUN_00101bd4(param_1,uVar1,param_2);
  return;
}




void FUN_0010213a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010229d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




long FUN_001021f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102568(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001028c3(void)

{
  return;
}




void FUN_001028a2(void)

{
  return;
}




void FUN_0010291b(void)

{
  return;
}




void FUN_001019a8(undefined8 param_1)

{
  FUN_00101b26(param_1);
  FUN_001018d2(param_1);
  return;
}




undefined8 FUN_00101546(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015d8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024b8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010250e(undefined4 param_1)

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




undefined8 FUN_00101e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102116(param_1);
  uVar2 = FUN_00101dda(param_1);
  FUN_0010213a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e45(param_2);
  uVar4 = FUN_001015f6(uVar1);
  FUN_001021b3(uVar2,uVar4,uVar3);
  FUN_001021f0(local_38,0);
  FUN_00102174(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102212(param_1,param_2);
  return;
}




void FUN_0010293c(void)

{
  return;
}




void FUN_00102897(void)

{
  return;
}




void FUN_00101a5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c86(param_2);
  FUN_00101c35(&local_21,uVar1);
  FUN_00101c98(param_1,&local_21);
  FUN_001019d4(&local_21);
  uVar1 = FUN_00101d20(param_2);
  uVar2 = FUN_00101cd0(param_2);
                    /* try { // try from 00101ae6 to 00101aea has its CatchHandler @ 00101aed */
  FUN_00101d6c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101dda(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102362(undefined8 param_1)

{
  return param_1;
}




void FUN_0010248d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102248(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010261c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101b26(undefined8 param_1)

{
  FUN_00101dca(param_1);
  return;
}




void FUN_001025bb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010286e(void)

{
  return 0;
}




void FUN_00102947(void)

{
  return;
}




void FUN_00102bd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001028ad(void)

{
  return;
}




void FUN_00101c98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fa4(param_2);
  FUN_00101fb6(param_1,uVar1);
  return;
}




undefined8 FUN_00101856(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010238c("Calling good()...");
  FUN_00101846();
  FUN_0010238c("Finished good()");
  FUN_0010238c("Calling bad()...");
  FUN_00101648();
  FUN_0010238c("Finished bad()");
  return 0;
}




void FUN_001022b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101e45(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018bb(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101648(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101968(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(8);
                    /* try { // try from 00101694 to 001016d1 has its CatchHandler @ 0010171d */
  FUN_00101a20(local_58,&local_60);
  FUN_00101a20(local_58,&local_60);
  FUN_00101a20(local_58,&local_60);
  FUN_00101a5a(local_38,local_58);
                    /* try { // try from 001016d9 to 001016dd has its CatchHandler @ 00101708 */
  FUN_00101449(local_38);
  FUN_00101988(local_38);
  FUN_00101988(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102082(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e45(param_2);
  uVar2 = FUN_00101546(param_1);
  FUN_00101bd4(param_1,uVar2,uVar1);
  return;
}




void FUN_00102116(undefined8 param_1)

{
  FUN_0010226f(param_1,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_001021b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e45(param_3);
  FUN_001022b0(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102adf(undefined8 *param_1)

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




undefined8 FUN_00102abc(void *param_1)

{
  free(param_1);
  return 1;
}




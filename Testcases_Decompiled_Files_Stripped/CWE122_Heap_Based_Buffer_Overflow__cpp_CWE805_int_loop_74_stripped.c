
undefined4 FUN_00101916(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_0010197a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bea(param_2);
  FUN_00101bfc(param_1,uVar1);
  return param_1;
}




void FUN_00103b2a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103922(param_3);
  puVar3 = (undefined8 *)FUN_0010170b(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




long FUN_001030b2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00104330(void)

{
  return;
}




void FUN_0010358e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103cad(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103c00(undefined4 param_1)

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




int FUN_00103f6f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a9a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c77(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a38(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102b00(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c9c(param_1,param_2);
  return;
}




void FUN_00102910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102988(param_1);
  FUN_00102b2a(uVar1,param_2,1);
  return;
}




undefined8 FUN_00101caa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102406(param_1);
  uVar2 = FUN_00101c98(param_4);
  uVar3 = FUN_00101c86(param_3);
  uVar4 = FUN_00101c74(param_2);
  FUN_00102432(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103346(undefined8 param_1)

{
  FUN_001034f0(param_1);
  return;
}




undefined8 FUN_00102972(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101c74(undefined8 param_1)

{
  return param_1;
}




void FUN_00103386(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102812(local_28);
    FUN_00103386(param_1,uVar1);
    lVar2 = FUN_0010294a(local_28);
    FUN_00102210(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00101b6a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010224e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102988(undefined8 param_1)

{
  return param_1;
}




void FUN_001042c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102298(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020d3(local_38);
    cVar1 = FUN_00101916(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102812(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010294a(local_38);
    }
  }
  FUN_0010224e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001030df(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102a38(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_001027e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102356(undefined8 param_1)

{
  FUN_00102960(param_1);
  return;
}




undefined8 FUN_00102c77(undefined8 param_1)

{
  return param_1;
}




bool FUN_00104153(pthread_t *param_1)

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




undefined4 FUN_001018ce(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101bba(param_1);
  return unaff_EBX;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00103d0e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103366(void)

{
  return;
}




void FUN_00101bc8(long param_1)

{
  FUN_00102356(param_1 + 0x20);
  return;
}




void FUN_0010357a(void)

{
  return;
}




void FUN_00104039(void)

{
  return;
}




void FUN_00104018(void)

{
  return;
}




void FUN_001023dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bea(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103a7e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00103d6e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_00103858(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102894(param_2);
  puVar2 = (undefined4 *)FUN_001038e8(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103bd5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010193d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bba(void)

{
  return;
}




void FUN_00103baa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101721(void)

{
  return;
}




void FUN_00103f94(void)

{
  return;
}




undefined8 FUN_001038d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102dc1(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031b6(local_88);
                    /* try { // try from 00102dfc to 00102e86 has its CatchHandler @ 00102ed2 */
  pvVar1 = operator_new__(200);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031f6(local_58,local_88);
                    /* try { // try from 00102e8e to 00102e92 has its CatchHandler @ 00102ebd */
  FUN_00101529(local_58);
  FUN_001031d6(local_58);
  FUN_001031d6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018f4(undefined8 *param_1)

{
  FUN_00101bc8(*param_1);
  return;
}




undefined8 FUN_00103f60(void)

{
  return 0;
}




void FUN_001028cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bc8(param_2);
  uVar2 = FUN_00102988(param_1);
  FUN_00102b00(uVar2,uVar1);
  return;
}




void FUN_00102c9c(void)

{
  return;
}




undefined8 FUN_00101bea(undefined8 param_1)

{
  return param_1;
}




void FUN_0010348c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010358e(local_18,param_1);
  FUN_001035ac(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010327c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010226c(param_1);
  FUN_00103386(param_1,uVar1);
  FUN_00103176(param_1);
  return;
}




void FUN_00101b1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102282(param_1);
  uVar2 = FUN_0010226c(param_1);
  FUN_00102298(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010402e(void)

{
  return;
}




long FUN_00102788(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102960(undefined8 param_1)

{
  return param_1;
}




void FUN_001031f6(undefined8 param_1,undefined8 param_2)

{
  FUN_001032ba(param_1,param_2);
  return;
}




ulong FUN_00103e72(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010279e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a38(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a38(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001019b2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001041ae(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ae2(undefined8 param_1)

{
  FUN_00102c8a(param_1);
  return;
}




void FUN_001023ac(undefined8 param_1)

{
  FUN_00102972(param_1);
  return;
}




void FUN_0010310c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103136(param_1);
  return;
}




undefined8 FUN_001025ea(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010226c(param_1);
  local_50 = FUN_00102282(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020d3(local_58);
    local_59 = FUN_00101916(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102812(local_58);
    }
    else {
      local_58 = FUN_0010294a(local_58);
    }
  }
  FUN_0010224e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a4a(param_1);
    cVar1 = FUN_001018a8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a9a(local_38,&local_58,&local_50);
      goto LAB_0010276c;
    }
    FUN_001027e6(&local_48);
  }
  uVar2 = FUN_0010258c(local_48);
  cVar1 = FUN_00101916(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102854(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a9a(local_38,&local_58,&local_50);
  }
LAB_0010276c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101c98(undefined8 param_1)

{
  return param_1;
}




void FUN_00102210(undefined8 param_1,undefined8 param_2)

{
  FUN_001028cc(param_1,param_2);
  FUN_00102910(param_1,param_2);
  return;
}




void FUN_001038e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103922(param_2);
  FUN_00103934(uVar1,uVar2);
  return;
}




void FUN_00102374(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bea(param_2);
  FUN_001023dc(param_1,uVar1);
  return;
}




undefined8 FUN_00103934(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102406(param_1);
  uVar2 = FUN_00103922(param_2);
  FUN_00103980(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103fec(void)

{
  return;
}




void FUN_00103ad6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b5c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cd8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103839(undefined8 param_1)

{
  FUN_001030df(param_1);
  return;
}




void FUN_00104023(void)

{
  return;
}




undefined8 FUN_00101c86(undefined8 param_1)

{
  return param_1;
}




long FUN_00102576(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103176(undefined8 param_1)

{
  FUN_0010325c(param_1);
  return;
}




void FUN_001031d6(undefined8 param_1)

{
  FUN_0010327c(param_1);
  return;
}




void FUN_001020d3(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102894(param_1);
  FUN_001028b6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001041d1(undefined8 *param_1)

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




void FUN_00103196(undefined8 param_1)

{
  FUN_00103220(param_1);
  return;
}




long FUN_00102282(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00103460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102c8a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103f51(void)

{
  return 1;
}




undefined8 FUN_0010170b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103aa4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cb0(param_1,param_2,param_3);
  return;
}




void FUN_001025aa(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a38(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001038bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102510(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010224e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103136(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001032ba(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033f0(param_1,param_2);
  lVar1 = FUN_00103460(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103476(param_1);
                    /* try { // try from 00103315 to 00103319 has its CatchHandler @ 0010331f */
    uVar3 = FUN_0010348c(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102894(long param_1)

{
  FUN_00102ae2(param_1 + 0x20);
  return;
}




void FUN_00104288(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010381b(undefined8 param_1)

{
  FUN_001030b2(param_1);
  return;
}




void FUN_0010224e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103550(undefined8 param_1,undefined8 param_2)

{
  FUN_00103682(param_1,param_2);
  return;
}




void FUN_00101c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ac(param_2);
  uVar1 = FUN_001023ca(uVar1);
  FUN_001023dc(param_1,uVar1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102510(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102282(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010258c(local_50);
    cVar2 = FUN_00101916(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010258c(local_50);
      cVar2 = FUN_00101916(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102854(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102576(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102576(local_60);
          local_48[1] = 0;
          FUN_001025aa(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102828(local_48);
          uVar6 = FUN_0010258c(*puVar5);
          cVar2 = FUN_00101916(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025ea(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102812(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025aa(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010279e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102788(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102788(local_60);
        uVar6 = FUN_00102788(local_60);
        FUN_0010279e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027e6(local_48);
        uVar6 = FUN_0010258c(*puVar5);
        cVar2 = FUN_00101916(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025ea(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102812(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025aa(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010279e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020b8;
  }
  lVar3 = FUN_00102560(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101dcc:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102576(local_60);
    uVar6 = FUN_0010258c(*puVar5);
    cVar2 = FUN_00101916(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101dcc;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102576(local_60);
    local_48[1] = 0;
    FUN_001025aa(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025ea(local_60,param_3);
  }
LAB_001020b8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102da3(undefined8 param_1)

{
  FUN_001023ac(param_1);
  return;
}




long FUN_001036ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103858(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038bc(param_2);
                    /* try { // try from 0010371b to 001037ad has its CatchHandler @ 001037d9 */
    uVar2 = FUN_001036ac(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038d2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103858(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038bc(local_38);
      uVar2 = FUN_001036ac(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038d2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001029c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c98(param_5);
  uVar2 = FUN_00101c86(param_4);
  uVar3 = FUN_00101c74(param_3);
  FUN_00102bac(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001034f0(void)

{
  return;
}




undefined8 FUN_00102cd8(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102432(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010170b(0x30,param_2);
  uVar1 = FUN_00101c98(param_5);
  uVar2 = FUN_00101c86(param_4);
  uVar3 = FUN_00101c74(param_3);
  uVar4 = FUN_00101bc8(param_2);
  uVar5 = FUN_00102988(param_1);
                    /* try { // try from 001024c1 to 001024c5 has its CatchHandler @ 001024c8 */
  FUN_001029c8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104044(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010170b(0x30,param_2);
  uVar1 = FUN_00103922(param_3);
  uVar2 = FUN_00101bc8(param_2);
  uVar3 = FUN_00102988(param_1);
  FUN_001039ee(uVar3,uVar2,uVar1);
  return;
}




void FUN_00101860(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b1a(param_1,param_2);
  return;
}




void FUN_00102cf0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d42(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103faa(void)

{
  return;
}




void FUN_00102eff(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031b6(local_88);
                    /* try { // try from 00102f3a to 00102fc4 has its CatchHandler @ 00103010 */
  pvVar1 = operator_new__(400);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101734(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031f6(local_58,local_88);
                    /* try { // try from 00102fcc to 00102fd0 has its CatchHandler @ 00102ffb */
  FUN_0010161a(local_58);
  FUN_001031d6(local_58);
  FUN_001031d6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00103476(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103afe(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cdb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103f9f(void)

{
  return;
}




void FUN_00102cb0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010161a(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = 2;
  puVar1 = (undefined8 *)FUN_00101734(param_1,&local_1bc);
  local_1b0 = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    local_1b0[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103ad6(*local_1b0);
  if (local_1b0 != (undefined4 *)0x0) {
    operator_delete__(local_1b0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_00102126(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102282(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010258c(param_3);
      uVar5 = FUN_001020d3(param_4);
      cVar1 = FUN_00101916(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021aa;
      }
    }
  }
  bVar2 = true;
LAB_001021aa:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010224e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c74(param_3);
  uVar1 = FUN_00101c86(param_4);
  FUN_00101950(local_38,uVar1);
  FUN_00101c98(param_5);
  uVar1 = FUN_0010170b(0x10,param_2);
                    /* try { // try from 00102c34 to 00102c38 has its CatchHandler @ 00102c3b */
  FUN_00102cf0(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023ca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a4a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010224e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010400d(void)

{
  return;
}




void FUN_00101950(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c34(param_1,param_2);
  return;
}




void FUN_00103fcb(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_0010404f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103922(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102828(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010226c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103376(void)

{
  return;
}




undefined8
FUN_001019d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c98(param_5);
  uVar2 = FUN_00101c86(param_4);
  uVar3 = FUN_00101c74(param_3);
  local_40 = FUN_00101caa(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a50 to 00101a93 has its CatchHandler @ 00101ad1 */
  uVar1 = FUN_001020d3(local_40);
  local_38 = FUN_00101d2a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102210(param_1,local_40);
    FUN_0010224e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102126(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_0010299a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b5c(param_1,param_2,0);
  return;
}




undefined8 FUN_0010294a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010303d(void)

{
  FUN_00102eff();
  return;
}




undefined8 FUN_0010304d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a7e("Calling good()...");
  FUN_0010303d();
  FUN_00103a7e("Finished good()");
  FUN_00103a7e("Calling bad()...");
  FUN_00102dc1();
  FUN_00103a7e("Finished bad()");
  return 0;
}




void FUN_001039ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103922(param_3);
  FUN_00103a2c(param_1,param_2,uVar1);
  return;
}




void FUN_00103fd6(void)

{
  return;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = 2;
  puVar1 = (undefined8 *)FUN_00101734(param_1,&local_1bc);
  local_1b0 = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    local_1b0[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103ad6(*local_1b0);
  if (local_1b0 != (undefined4 *)0x0) {
    operator_delete__(local_1b0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034ff(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103654(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102854(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a38(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00104086(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010404f,local_18);
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




void FUN_00104002(void)

{
  return;
}




void FUN_0010325c(undefined8 param_1)

{
  FUN_00103376(param_1);
  return;
}




void FUN_0010258c(undefined8 param_1)

{
  FUN_001020d3(param_1);
  return;
}




void FUN_00103fe1(void)

{
  return;
}




void FUN_0010424a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103fc0(void)

{
  return;
}




void FUN_00103c5a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010188a(undefined8 param_1)

{
  FUN_00101b6a(param_1);
  return;
}




void FUN_00103b7f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




undefined8 FUN_001028b6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b54(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103f89(void)

{
  return;
}




void FUN_00103fb5(void)

{
  return;
}




void FUN_00103682(void)

{
  return;
}




void FUN_00101bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bea(param_2);
  FUN_00102374(param_1,uVar1);
  return;
}




void FUN_001031b6(undefined8 param_1)

{
  FUN_00103196(param_1);
  return;
}




void FUN_001033f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034ff(param_1,param_2);
  FUN_0010357a(param_1,param_2);
  FUN_0010310c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103220(long param_1)

{
  FUN_00103346(param_1);
  FUN_00103366(param_1);
  FUN_0010310c(param_1 + 8);
  return;
}




undefined8 FUN_00103654(undefined8 param_1,undefined8 param_2)

{
  FUN_00103550(param_1,param_2);
  return param_1;
}




void FUN_00102d42(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d85(param_2);
  puVar2 = (undefined4 *)FUN_001023ca(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001018a8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00102812(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102d85(undefined8 param_1)

{
  FUN_00102da3(param_1);
  return;
}




void FUN_00102406(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102988(param_1);
  FUN_0010299a(uVar1,1);
  return;
}




undefined8 FUN_00103696(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001035ac(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102282(param_1);
  uVar2 = FUN_00103696(param_2);
  uVar1 = FUN_001036ac(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102788(param_1);
  uVar2 = FUN_0010381b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102576(param_1);
  uVar2 = FUN_00103839(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00104269(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103ff7(void)

{
  return;
}




long FUN_00101734(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101860(param_1,param_2);
  local_28 = FUN_0010188a(param_1);
  cVar2 = FUN_001018a8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018ce(param_1);
    uVar3 = FUN_001018f4(&local_38);
    cVar2 = FUN_00101916(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017d4;
    }
  }
  bVar1 = true;
LAB_001017d4:
  if (bVar1) {
    uVar3 = FUN_0010193d(param_2);
    FUN_0010197a(local_30,uVar3);
    FUN_001019b2(&local_28,&local_38);
    local_38 = FUN_001019d4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018f4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103c82(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




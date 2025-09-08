
void FUN_00102364(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b72(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103fc6(void)

{
  return;
}




bool FUN_00104117(pthread_t *param_1)

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




void FUN_00102726(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010315a(undefined8 param_1)

{
  FUN_001031e4(param_1);
  return;
}




void FUN_00103bc4(undefined4 param_1)

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




undefined8 FUN_001028d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00102710(long param_1)

{
  return param_1 + 0x18;
}




void FUN_0010187c(undefined8 *param_1)

{
  FUN_00101b50(*param_1);
  return;
}




undefined8 FUN_00101c32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010238e(param_1);
  uVar2 = FUN_00101c20(param_4);
  uVar3 = FUN_00101c0e(param_3);
  uVar4 = FUN_00101bfc(param_2);
  FUN_001023ba(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




int FUN_00103f33(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010193a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102c60(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101c0e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101bfc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f63(void)

{
  return;
}




ulong FUN_00103d32(long param_1,ulong param_2,long param_3)

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




void FUN_00103f58(void)

{
  return;
}




void FUN_00103f9a(void)

{
  return;
}




void FUN_001037fd(undefined8 param_1)

{
  FUN_001030a3(param_1);
  return;
}




void FUN_00101b50(long param_1)

{
  FUN_001022de(param_1 + 0x20);
  return;
}




undefined8 FUN_001034c3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103618(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103fd1(void)

{
  return;
}




void FUN_0010205b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010281c(param_1);
  FUN_0010283e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010420e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c9f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001027dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029c0(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103f4d(void)

{
  return;
}




void FUN_00102950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c20(param_5);
  uVar2 = FUN_00101c0e(param_4);
  uVar3 = FUN_00101bfc(param_3);
  FUN_00102b34(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001016a9(void)

{
  return;
}




undefined8 * FUN_0010276e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103a68(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101bfc(param_3);
  uVar1 = FUN_00101c0e(param_4);
  FUN_001018d8(local_38,uVar1);
  FUN_00101c20(param_5);
  uVar1 = FUN_00101693(0x10,param_2);
                    /* try { // try from 00102bbc to 00102bc0 has its CatchHandler @ 00102bc3 */
  FUN_00102c78(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_0010381c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010281c(param_2);
  puVar2 = (undefined4 *)FUN_001038ac(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b72(param_2);
  FUN_001022fc(param_1,uVar1);
  return;
}




void FUN_00103001(void)

{
  FUN_00102ea5();
  return;
}




void FUN_00103b43(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010319a(undefined8 param_1)

{
  FUN_00103240(param_1);
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_00102a6a(undefined8 param_1)

{
  FUN_00102c12(param_1);
  return;
}




void FUN_00103aee(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001028e8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ffd(void)

{
  return;
}




void FUN_00102514(undefined8 param_1)

{
  FUN_0010205b(param_1);
  return;
}




void FUN_001031ba(undefined8 param_1,undefined8 param_2)

{
  FUN_0010327e(param_1,param_2);
  return;
}




void FUN_00102532(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029c0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d0d(undefined8 param_1)

{
  FUN_00102d2b(param_1);
  return;
}




undefined8 * FUN_001027b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103ff2(void)

{
  return;
}




undefined8 FUN_00101b72(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102334(param_2);
  uVar1 = FUN_00102352(uVar1);
  FUN_00102364(param_1,uVar1);
  return;
}




void FUN_00102334(undefined8 param_1)

{
  FUN_001028fa(param_1);
  return;
}




undefined8 FUN_00103618(undefined8 param_1,undefined8 param_2)

{
  FUN_00103514(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_0010238e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102910(param_1);
  FUN_00102922(uVar1,1);
  return;
}




void FUN_00102c38(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001018d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bbc(param_1,param_2);
  return;
}




void FUN_001034b4(void)

{
  return;
}




void FUN_00103fbb(void)

{
  return;
}




ulong FUN_00103e36(long param_1,ulong param_2,long param_3)

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




void FUN_00103fe7(void)

{
  return;
}




undefined8 FUN_00101902(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b72(param_2);
  FUN_00101b84(param_1,uVar1);
  return param_1;
}




long FUN_001016bc(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017e8(param_1,param_2);
  local_28 = FUN_00101812(param_1);
  cVar2 = FUN_00101830(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101856(param_1);
    uVar3 = FUN_0010187c(&local_38);
    cVar2 = FUN_0010189e(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010175c;
    }
  }
  bVar1 = true;
LAB_0010175c:
  if (bVar1) {
    uVar3 = FUN_001018c5(param_2);
    FUN_00101902(local_30,uVar3);
    FUN_0010193a(&local_28,&local_38);
    local_38 = FUN_0010195c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010187c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010333a(void)

{
  return;
}




undefined8
FUN_0010195c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c20(param_5);
  uVar2 = FUN_00101c0e(param_4);
  uVar3 = FUN_00101bfc(param_3);
  local_40 = FUN_00101c32(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019d8 to 00101a1b has its CatchHandler @ 00101a59 */
  uVar1 = FUN_0010205b(local_40);
  local_38 = FUN_00101cb2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102198(param_1,local_40);
    FUN_001021d6(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020ae(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001030fa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102898(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102910(param_1);
  FUN_00102ab2(uVar1,param_2,1);
  return;
}




undefined8 FUN_001028fa(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103b18(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010220a(long param_1)

{
  return param_1 + 8;
}




void FUN_0010330a(undefined8 param_1)

{
  FUN_001034b4(param_1);
  return;
}




void FUN_00103b6e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00104195(undefined8 *param_1)

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




undefined8 FUN_0010279a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f8f(void)

{
  return;
}




void FUN_00103ac2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 FUN_0010189e(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103646(void)

{
  return;
}




undefined8 FUN_00103011(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a42("Calling good()...");
  FUN_00103001();
  FUN_00103a42("Finished good()");
  FUN_00103a42("Calling bad()...");
  FUN_00102d49();
  FUN_00103a42("Finished bad()");
  return 0;
}




undefined8 FUN_001038e6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c20(undefined8 param_1)

{
  return param_1;
}




void FUN_001017e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aa2(param_1,param_2);
  return;
}




void FUN_001031e4(long param_1)

{
  FUN_0010330a(param_1);
  FUN_0010332a(param_1);
  FUN_001030d0(param_1 + 8);
  return;
}




undefined8
FUN_001020ae(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010220a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102514(param_3);
      uVar5 = FUN_0010205b(param_4);
      cVar1 = FUN_0010189e(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102132;
      }
    }
  }
  bVar2 = true;
LAB_00102132:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021d6(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103fb0(void)

{
  return;
}




void FUN_0010281c(long param_1)

{
  FUN_00102a6a(param_1 + 0x20);
  return;
}




undefined8 FUN_00102498(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021d6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b72(param_2);
  FUN_00102364(param_1,uVar1);
  return;
}




void FUN_00102ea5(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317a(local_88);
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f1f to 00102f88 has its CatchHandler @ 00102fd4 */
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031ba(local_58,local_88);
                    /* try { // try from 00102f90 to 00102f94 has its CatchHandler @ 00102fbf */
  FUN_001015ee(local_58);
  FUN_0010319a(local_58);
  FUN_0010319a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cd2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102ab2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c38(param_1,param_2,param_3);
  return;
}




void FUN_00103f79(void)

{
  return;
}




undefined8 FUN_00101af2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021d6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00101856(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b42(param_1);
  return unaff_EBX;
}




long FUN_00103076(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_001024fe(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001038ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038e6(param_2);
  FUN_001038f8(uVar1,uVar2);
  return;
}




void FUN_00103f84(void)

{
  return;
}




void FUN_001042f0(void)

{
  return;
}




void FUN_0010327e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033b4(param_1,param_2);
  lVar1 = FUN_00103424(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010343a(param_1);
                    /* try { // try from 001032d9 to 001032dd has its CatchHandler @ 001032e3 */
    uVar3 = FUN_00103450(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00102c12(undefined8 param_1)

{
  return param_1;
}




long FUN_0010343a(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102910(undefined8 param_1)

{
  return param_1;
}




void FUN_00103220(undefined8 param_1)

{
  FUN_0010333a(param_1);
  return;
}




undefined8 FUN_00102220(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010205b(local_38);
    cVar1 = FUN_0010189e(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010279a(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028d2(local_38);
    }
  }
  FUN_001021d6(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016bc(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_00103a42(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010220a(param_1);
  uVar2 = FUN_001021f4(param_1);
  FUN_00102220(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102572(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021f4(param_1);
  local_50 = FUN_0010220a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010205b(local_58);
    local_59 = FUN_0010189e(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010279a(local_58);
    }
    else {
      local_58 = FUN_001028d2(local_58);
    }
  }
  FUN_001021d6(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029d2(param_1);
    cVar1 = FUN_00101830(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a22(local_38,&local_58,&local_50);
      goto LAB_001026f4;
    }
    FUN_0010276e(&local_48);
  }
  uVar2 = FUN_00102514(local_48);
  cVar1 = FUN_0010189e(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027dc(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a22(local_38,&local_58,&local_50);
  }
LAB_001026f4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010365a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103570(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010220a(param_1);
  uVar2 = FUN_0010365a(param_2);
  uVar1 = FUN_00103670(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102710(param_1);
  uVar2 = FUN_001037df(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024fe(param_1);
  uVar2 = FUN_001037fd(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_001030a3(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103f15(void)

{
  return 1;
}




void FUN_0010313a(undefined8 param_1)

{
  FUN_00103220(param_1);
  return;
}




void FUN_00103fa5(void)

{
  return;
}




void FUN_0010422d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103240(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f4(param_1);
  FUN_0010334a(param_1,uVar1);
  FUN_0010313a(param_1);
  return;
}




void FUN_00103c46(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001039f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038e6(param_3);
  puVar3 = (undefined8 *)FUN_00101693(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102d2b(undefined8 param_1)

{
  FUN_00102334(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102498(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010220a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102514(local_50);
    cVar2 = FUN_0010189e(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102514(local_50);
      cVar2 = FUN_0010189e(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027dc(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024fe(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024fe(local_60);
          local_48[1] = 0;
          FUN_00102532(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027b0(local_48);
          uVar6 = FUN_00102514(*puVar5);
          cVar2 = FUN_0010189e(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102572(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010279a(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102532(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102726(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102710(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102710(local_60);
        uVar6 = FUN_00102710(local_60);
        FUN_00102726(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010276e(local_48);
        uVar6 = FUN_00102514(*puVar5);
        cVar2 = FUN_0010189e(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102572(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010279a(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102532(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102726(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102040;
  }
  lVar3 = FUN_001024e8(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d54:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024fe(local_60);
    uVar6 = FUN_00102514(*puVar5);
    cVar2 = FUN_0010189e(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d54;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024fe(local_60);
    local_48[1] = 0;
    FUN_00102532(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102572(local_60,param_3);
  }
LAB_00102040:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103a9a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00102a22(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102bff(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029c0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010334a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010279a(local_28);
    FUN_0010334a(param_1,uVar1);
    lVar2 = FUN_001028d2(local_28);
    FUN_00102198(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102bff(undefined8 param_1)

{
  return param_1;
}




void FUN_001015ee(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016bc(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_00103a42(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b99(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103552(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101693(0x30,param_2);
  uVar1 = FUN_001038e6(param_3);
  uVar2 = FUN_00101b50(param_2);
  uVar3 = FUN_00102910(param_1);
  FUN_001039b2(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010283e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022de(undefined8 param_1)

{
  FUN_001028e8(param_1);
  return;
}




void FUN_00102cca(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d0d(param_2);
  puVar2 = (undefined4 *)FUN_00102352(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c1e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102d49(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317a(local_88);
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102dc3 to 00102e2c has its CatchHandler @ 00102e78 */
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016bc(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031ba(local_58,local_88);
                    /* try { // try from 00102e34 to 00102e38 has its CatchHandler @ 00102e63 */
  FUN_00101549(local_58);
  FUN_0010319a(local_58);
  FUN_0010319a(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102922(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ae4(param_1,param_2,0);
  return;
}




void FUN_00102c24(void)

{
  return;
}




undefined8 FUN_00101693(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b42(void)

{
  return;
}




void FUN_00103f6e(void)

{
  return;
}




void FUN_001021d6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00103670(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010381c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103880(param_2);
                    /* try { // try from 001036df to 00103771 has its CatchHandler @ 0010379d */
    uVar2 = FUN_00103670(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103896(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010381c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103880(local_38);
      uVar2 = FUN_00103670(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103896(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00104008(void)

{
  return;
}




undefined8 FUN_001038f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010238e(param_1);
  uVar2 = FUN_001038e6(param_2);
  FUN_00103944(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00102352(undefined8 param_1)

{
  return param_1;
}




void FUN_00104280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a42(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c71(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001024e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101812(undefined8 param_1)

{
  FUN_00101af2(param_1);
  return;
}




void FUN_00102ae4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c60(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00104172(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001037df(undefined8 param_1)

{
  FUN_00103076(param_1);
  return;
}




void FUN_00103450(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103552(local_18,param_1);
  FUN_00103570(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010332a(void)

{
  return;
}




undefined8 FUN_00103f24(void)

{
  return 0;
}




void FUN_00102a88(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c24(param_1,param_2);
  return;
}




undefined8 FUN_00103424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c78(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cca(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029d2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021d6(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101693(0x30,param_2);
  uVar1 = FUN_00101c20(param_5);
  uVar2 = FUN_00101c0e(param_4);
  uVar3 = FUN_00101bfc(param_3);
  uVar4 = FUN_00101b50(param_2);
  uVar5 = FUN_00102910(param_1);
                    /* try { // try from 00102449 to 0010244d has its CatchHandler @ 00102450 */
  FUN_00102950(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010424c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010317a(undefined8 param_1)

{
  FUN_0010315a(param_1);
  return;
}




undefined8 FUN_00103896(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034c3(param_1,param_2);
  FUN_0010353e(param_1,param_2);
  FUN_001030d0(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010353e(void)

{
  return;
}




void FUN_00102198(undefined8 param_1,undefined8 param_2)

{
  FUN_00102854(param_1,param_2);
  FUN_00102898(param_1,param_2);
  return;
}




undefined8 FUN_0010404a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104013,local_18);
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




void FUN_001039b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038e6(param_3);
  FUN_001039f0(param_1,param_2,uVar1);
  return;
}




void FUN_00103514(undefined8 param_1,undefined8 param_2)

{
  FUN_00103646(param_1,param_2);
  return;
}




void FUN_00102854(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b50(param_2);
  uVar2 = FUN_00102910(param_1);
  FUN_00102a88(uVar2,uVar1);
  return;
}




undefined8 FUN_00101830(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001029c0(undefined8 param_1)

{
  return param_1;
}




void FUN_001030d0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030fa(param_1);
  return;
}




void FUN_00104013(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001018c5(undefined8 param_1)

{
  return param_1;
}




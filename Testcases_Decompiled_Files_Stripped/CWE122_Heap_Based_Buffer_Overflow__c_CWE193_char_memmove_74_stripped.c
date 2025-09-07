
void FUN_0010236e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103fbc(void)

{
  return;
}




bool FUN_0010410d(pthread_t *param_1)

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




void FUN_00102730(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029ca(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029ca(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103150(undefined8 param_1)

{
  FUN_001031da(param_1);
  return;
}




void FUN_00103bba(undefined4 param_1)

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




undefined8 FUN_001028dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_0010271a(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00101886(undefined8 *param_1)

{
  FUN_00101b5a(*param_1);
  return;
}




undefined8 FUN_00101c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102398(param_1);
  uVar2 = FUN_00101c2a(param_4);
  uVar3 = FUN_00101c18(param_3);
  uVar4 = FUN_00101c06(param_2);
  FUN_001023c4(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




int FUN_00103f29(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101944(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102c6a(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101c18(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c06(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f59(void)

{
  return;
}




ulong FUN_00103d28(long param_1,ulong param_2,long param_3)

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




void FUN_00103f4e(void)

{
  return;
}




void FUN_00103f90(void)

{
  return;
}




void FUN_001037f3(undefined8 param_1)

{
  FUN_00103099(param_1);
  return;
}




void FUN_00101b5a(long param_1)

{
  FUN_001022e8(param_1 + 0x20);
  return;
}




undefined8 FUN_001034b9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010360e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103fc7(void)

{
  return;
}




void FUN_00102065(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102826(param_1);
  FUN_00102848(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104204(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103c95(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001027e6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029ca(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103f43(void)

{
  return;
}




void FUN_0010295a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c2a(param_5);
  uVar2 = FUN_00101c18(param_4);
  uVar3 = FUN_00101c06(param_3);
  FUN_00102b3e(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001016b3(void)

{
  return;
}




undefined8 * FUN_00102778(undefined8 *param_1)

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




void FUN_00103a5e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c06(param_3);
  uVar1 = FUN_00101c18(param_4);
  FUN_001018e2(local_38,uVar1);
  FUN_00101c2a(param_5);
  uVar1 = FUN_0010169d(0x10,param_2);
                    /* try { // try from 00102bc6 to 00102bca has its CatchHandler @ 00102bcd */
  FUN_00102c82(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103812(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102826(param_2);
  puVar2 = (undefined4 *)FUN_001038a2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101b8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7c(param_2);
  FUN_00102306(param_1,uVar1);
  return;
}




void FUN_00102ff7(void)

{
  FUN_00102ea5();
  return;
}




void FUN_00103b39(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103190(undefined8 param_1)

{
  FUN_00103236(param_1);
  return;
}




void FUN_00103fd2(void)

{
  return;
}




void FUN_00102a74(undefined8 param_1)

{
  FUN_00102c1c(param_1);
  return;
}




void FUN_00103ae4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001028f2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021fe(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ff3(void)

{
  return;
}




void FUN_0010251e(undefined8 param_1)

{
  FUN_00102065(param_1);
  return;
}




void FUN_001031b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103274(param_1,param_2);
  return;
}




void FUN_0010253c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029ca(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d17(undefined8 param_1)

{
  FUN_00102d35(param_1);
  return;
}




undefined8 * FUN_001027ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103fe8(void)

{
  return;
}




undefined8 FUN_00101b7c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010233e(param_2);
  uVar1 = FUN_0010235c(uVar1);
  FUN_0010236e(param_1,uVar1);
  return;
}




void FUN_0010233e(undefined8 param_1)

{
  FUN_00102904(param_1);
  return;
}




undefined8 FUN_0010360e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010350a(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010291a(param_1);
  FUN_0010292c(uVar1,1);
  return;
}




void FUN_00102c42(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001018e2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bc6(param_1,param_2);
  return;
}




void FUN_001034aa(void)

{
  return;
}




void FUN_00103fb1(void)

{
  return;
}




ulong FUN_00103e2c(long param_1,ulong param_2,long param_3)

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




void FUN_00103fdd(void)

{
  return;
}




undefined8 FUN_0010190c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7c(param_2);
  FUN_00101b8e(param_1,uVar1);
  return param_1;
}




long FUN_001016c6(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017f2(param_1,param_2);
  local_28 = FUN_0010181c(param_1);
  cVar2 = FUN_0010183a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101860(param_1);
    uVar3 = FUN_00101886(&local_38);
    cVar2 = FUN_001018a8(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101766;
    }
  }
  bVar1 = true;
LAB_00101766:
  if (bVar1) {
    uVar3 = FUN_001018cf(param_2);
    FUN_0010190c(local_30,uVar3);
    FUN_00101944(&local_28,&local_38);
    local_38 = FUN_00101966(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101886(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103330(void)

{
  return;
}




undefined8
FUN_00101966(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c2a(param_5);
  uVar2 = FUN_00101c18(param_4);
  uVar3 = FUN_00101c06(param_3);
  local_40 = FUN_00101c3c(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019e2 to 00101a25 has its CatchHandler @ 00101a63 */
  uVar1 = FUN_00102065(local_40);
  local_38 = FUN_00101cbc(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021a2(param_1,local_40);
    FUN_001021e0(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020b8(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001030f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001028a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010291a(param_1);
  FUN_00102abc(uVar1,param_2,1);
  return;
}




undefined8 FUN_00102904(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103b0e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102214(long param_1)

{
  return param_1 + 8;
}




void FUN_00103300(undefined8 param_1)

{
  FUN_001034aa(param_1);
  return;
}




void FUN_00103b64(undefined8 param_1)

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




undefined8 FUN_0010418b(undefined8 *param_1)

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




undefined8 FUN_001027a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f85(void)

{
  return;
}




void FUN_00103ab8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 FUN_001018a8(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010363c(void)

{
  return;
}




undefined8 FUN_00103007(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a38("Calling good()...");
  FUN_00102ff7();
  FUN_00103a38("Finished good()");
  FUN_00103a38("Calling bad()...");
  FUN_00102d53();
  FUN_00103a38("Finished bad()");
  return 0;
}




undefined8 FUN_001038dc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c2a(undefined8 param_1)

{
  return param_1;
}




void FUN_001017f2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101aac(param_1,param_2);
  return;
}




void FUN_001031da(long param_1)

{
  FUN_00103300(param_1);
  FUN_00103320(param_1);
  FUN_001030c6(param_1 + 8);
  return;
}




undefined8
FUN_001020b8(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102214(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010251e(param_3);
      uVar5 = FUN_00102065(param_4);
      cVar1 = FUN_001018a8(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010213c;
      }
    }
  }
  bVar2 = true;
LAB_0010213c:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021e0(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103fa6(void)

{
  return;
}




void FUN_00102826(long param_1)

{
  FUN_00102a74(param_1 + 0x20);
  return;
}




undefined8 FUN_001024a2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102306(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b7c(param_2);
  FUN_0010236e(param_1,uVar1);
  return;
}




void FUN_00102ea5(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103170(local_88);
  pvVar1 = malloc(0xb);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102f15 to 00102f7e has its CatchHandler @ 00102fca */
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031b0(local_58,local_88);
                    /* try { // try from 00102f86 to 00102f8a has its CatchHandler @ 00102fb5 */
  FUN_001015f3(local_58);
  FUN_00103190(local_58);
  FUN_00103190(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cc8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c42(param_1,param_2,param_3);
  return;
}




void FUN_00103f6f(void)

{
  return;
}




undefined8 FUN_00101afc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00101860(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b4c(param_1);
  return unaff_EBX;
}




long FUN_0010306c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_00102508(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001038a2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001038dc(param_2);
  FUN_001038ee(uVar1,uVar2);
  return;
}




void FUN_00103f7a(void)

{
  return;
}




void FUN_001042e0(void)

{
  return;
}




void FUN_00103274(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033aa(param_1,param_2);
  lVar1 = FUN_0010341a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103430(param_1);
                    /* try { // try from 001032cf to 001032d3 has its CatchHandler @ 001032d9 */
    uVar3 = FUN_00103446(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00102c1c(undefined8 param_1)

{
  return param_1;
}




long FUN_00103430(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_0010291a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103216(undefined8 param_1)

{
  FUN_00103330(param_1);
  return;
}




undefined8 FUN_0010222a(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102065(local_38);
    cVar1 = FUN_001018a8(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027a4(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028dc(local_38);
    }
  }
  FUN_001021e0(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  void *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_001016c6(param_1,&local_2c);
  local_28 = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(local_28,local_1b,sVar2 + 1);
  FUN_00103a38(local_28);
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101aac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102214(param_1);
  uVar2 = FUN_001021fe(param_1);
  FUN_0010222a(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_0010257c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021fe(param_1);
  local_50 = FUN_00102214(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102065(local_58);
    local_59 = FUN_001018a8(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027a4(local_58);
    }
    else {
      local_58 = FUN_001028dc(local_58);
    }
  }
  FUN_001021e0(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029dc(param_1);
    cVar1 = FUN_0010183a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a2c(local_38,&local_58,&local_50);
      goto LAB_001026fe;
    }
    FUN_00102778(&local_48);
  }
  uVar2 = FUN_0010251e(local_48);
  cVar1 = FUN_001018a8(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027e6(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a2c(local_38,&local_58,&local_50);
  }
LAB_001026fe:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103566(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102214(param_1);
  uVar2 = FUN_00103650(param_2);
  uVar1 = FUN_00103666(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010271a(param_1);
  uVar2 = FUN_001037d5(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102508(param_1);
  uVar2 = FUN_001037f3(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_00103099(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103f0b(void)

{
  return 1;
}




void FUN_00103130(undefined8 param_1)

{
  FUN_00103216(param_1);
  return;
}




void FUN_00103f9b(void)

{
  return;
}




void FUN_00104223(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103236(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021fe(param_1);
  FUN_00103340(param_1,uVar1);
  FUN_00103130(param_1);
  return;
}




void FUN_00103c3c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001039e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001038dc(param_3);
  puVar3 = (undefined8 *)FUN_0010169d(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102d35(undefined8 param_1)

{
  FUN_0010233e(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024a2(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102214(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010251e(local_50);
    cVar2 = FUN_001018a8(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010251e(local_50);
      cVar2 = FUN_001018a8(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027e6(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102508(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102508(local_60);
          local_48[1] = 0;
          FUN_0010253c(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027ba(local_48);
          uVar6 = FUN_0010251e(*puVar5);
          cVar2 = FUN_001018a8(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010257c(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027a4(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010253c(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102730(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010271a(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010271a(local_60);
        uVar6 = FUN_0010271a(local_60);
        FUN_00102730(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102778(local_48);
        uVar6 = FUN_0010251e(*puVar5);
        cVar2 = FUN_001018a8(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010257c(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027a4(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010253c(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102730(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010204a;
  }
  lVar3 = FUN_001024f2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d5e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102508(local_60);
    uVar6 = FUN_0010251e(*puVar5);
    cVar2 = FUN_001018a8(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d5e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102508(local_60);
    local_48[1] = 0;
    FUN_0010253c(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010257c(local_60,param_3);
  }
LAB_0010204a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103a90(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00102a2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c09(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029ca(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103340(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027a4(local_28);
    FUN_00103340(param_1,uVar1);
    lVar2 = FUN_001028dc(local_28);
    FUN_001021a2(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103876(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102c09(undefined8 param_1)

{
  return param_1;
}




void FUN_001015f3(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  void *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  puVar1 = (undefined8 *)FUN_001016c6(param_1,&local_2c);
  local_28 = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(local_28,local_1b,sVar2 + 1);
  FUN_00103a38(local_28);
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b8f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103548(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010393a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010169d(0x30,param_2);
  uVar1 = FUN_001038dc(param_3);
  uVar2 = FUN_00101b5a(param_2);
  uVar3 = FUN_0010291a(param_1);
  FUN_001039a8(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102848(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022e8(undefined8 param_1)

{
  FUN_001028f2(param_1);
  return;
}




void FUN_00102cd4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d17(param_2);
  puVar2 = (undefined4 *)FUN_0010235c(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c14(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102d53(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103170(local_88);
  pvVar1 = malloc(10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102dc3 to 00102e2c has its CatchHandler @ 00102e78 */
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016c6(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031b0(local_58,local_88);
                    /* try { // try from 00102e34 to 00102e38 has its CatchHandler @ 00102e63 */
  FUN_00101549(local_58);
  FUN_00103190(local_58);
  FUN_00103190(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010292c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102aee(param_1,param_2,0);
  return;
}




void FUN_00102c2e(void)

{
  return;
}




undefined8 FUN_0010169d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b4c(void)

{
  return;
}




void FUN_00103f64(void)

{
  return;
}




void FUN_001021e0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00103666(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103812(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103876(param_2);
                    /* try { // try from 001036d5 to 00103767 has its CatchHandler @ 00103793 */
    uVar2 = FUN_00103666(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010388c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103812(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103876(local_38);
      uVar2 = FUN_00103666(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010388c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103ffe(void)

{
  return;
}




undefined8 FUN_001038ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102398(param_1);
  uVar2 = FUN_001038dc(param_2);
  FUN_0010393a(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010235c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104270(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a38(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c67(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001024f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010181c(undefined8 param_1)

{
  FUN_00101afc(param_1);
  return;
}




void FUN_00102aee(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c6a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00104168(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001037d5(undefined8 param_1)

{
  FUN_0010306c(param_1);
  return;
}




void FUN_00103446(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103548(local_18,param_1);
  FUN_00103566(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103320(void)

{
  return;
}




undefined8 FUN_00103f1a(void)

{
  return 0;
}




void FUN_00102a92(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c2e(param_1,param_2);
  return;
}




undefined8 FUN_0010341a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c82(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cd4(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029dc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021e0(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010169d(0x30,param_2);
  uVar1 = FUN_00101c2a(param_5);
  uVar2 = FUN_00101c18(param_4);
  uVar3 = FUN_00101c06(param_3);
  uVar4 = FUN_00101b5a(param_2);
  uVar5 = FUN_0010291a(param_1);
                    /* try { // try from 00102453 to 00102457 has its CatchHandler @ 0010245a */
  FUN_0010295a(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104242(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103170(undefined8 param_1)

{
  FUN_00103150(param_1);
  return;
}




undefined8 FUN_0010388c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033aa(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034b9(param_1,param_2);
  FUN_00103534(param_1,param_2);
  FUN_001030c6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103534(void)

{
  return;
}




void FUN_001021a2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010285e(param_1,param_2);
  FUN_001028a2(param_1,param_2);
  return;
}




undefined8 FUN_00104040(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104009,local_18);
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




void FUN_001039a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001038dc(param_3);
  FUN_001039e6(param_1,param_2,uVar1);
  return;
}




void FUN_0010350a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010363c(param_1,param_2);
  return;
}




void FUN_0010285e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b5a(param_2);
  uVar2 = FUN_0010291a(param_1);
  FUN_00102a92(uVar2,uVar1);
  return;
}




undefined8 FUN_0010183a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001029ca(undefined8 param_1)

{
  return param_1;
}




void FUN_001030c6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030f0(param_1);
  return;
}




void FUN_00104009(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001018cf(undefined8 param_1)

{
  return param_1;
}




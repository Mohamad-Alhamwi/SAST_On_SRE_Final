
void FUN_00101d58(undefined8 param_1)

{
  FUN_001021d2(param_1);
  return;
}




void FUN_00103d27(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010402e(void)

{
  return;
}




undefined4 FUN_00101ece(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00102c7a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103815(undefined8 param_1)

{
  return param_1;
}




void FUN_0010216e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029ee(local_18,param_1);
  FUN_00102a0c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101eac(undefined8 *param_1)

{
  FUN_001022fa(*param_1);
  return;
}




void FUN_00103acc(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101ba0(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001019c5(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00104086(void)

{
  return;
}




void FUN_001040b2(void)

{
  return;
}




undefined8
FUN_00102858(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b32(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e3c(param_3);
      uVar5 = FUN_00102805(param_4);
      cVar1 = FUN_00101ece(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001028dc;
      }
    }
  }
  bVar2 = true;
LAB_001028dc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102942(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00104253(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101985(void)

{
  return;
}




undefined8 FUN_0010196f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b7b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103981(undefined8 param_1)

{
  FUN_00102c5c(param_1);
  return;
}




void FUN_00103b49(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103c4f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104091(void)

{
  return;
}




undefined8 FUN_001033ea(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001040bd(void)

{
  return;
}




void FUN_001040e9(void)

{
  return;
}




void FUN_00101660(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9c(local_88);
                    /* try { // try from 0010169b to 00101725 has its CatchHandler @ 00101771 */
  pvVar1 = operator_new(8);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101adc(local_58,local_88);
                    /* try { // try from 0010172d to 00101731 has its CatchHandler @ 0010175c */
  FUN_00103a5f(local_58);
  FUN_00101abc(local_58);
  FUN_00101abc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103166(undefined8 param_1,undefined8 param_2)

{
  FUN_001029b0(param_1,param_2);
  return param_1;
}




void FUN_00103d52(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a1c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001040a7(void)

{
  return;
}




void FUN_0010404f(void)

{
  return;
}




void FUN_00103926(undefined8 param_1)

{
  FUN_00103981(param_1);
  return;
}




void FUN_00101f6a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b23(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010224c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b32(param_1);
  uVar2 = FUN_00101e02(param_1);
  FUN_00102b48(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00101ef5(undefined8 param_1)

{
  return param_1;
}




void FUN_0010360a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001023b8(undefined8 param_1)

{
  return param_1;
}




void FUN_001033ff(undefined8 param_1,undefined8 param_2)

{
  FUN_00103632(param_1,param_2,0);
  return;
}




void FUN_001018f5(void)

{
  FUN_00101660();
  FUN_0010179e();
  return;
}




void FUN_00102ab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022fa(param_2);
  uVar2 = FUN_0010336a(param_1);
  FUN_0010337c(uVar2,uVar1);
  return;
}




void FUN_00103772(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103815(param_2);
  FUN_00103828(uVar1,uVar2);
  return;
}




void FUN_00102cb6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010336a(param_1);
  FUN_001033ff(uVar1,1);
  return;
}




void FUN_00103d80(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010231c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010374d(undefined8 param_1)

{
  return param_1;
}




void FUN_001021d2(void)

{
  return;
}




void FUN_00101abc(undefined8 param_1)

{
  FUN_00101b62(param_1);
  return;
}




ulong FUN_00103f17(long param_1,ulong param_2,long param_3)

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




void FUN_00101e42(undefined8 param_1)

{
  FUN_0010229c(param_1);
  return;
}




void FUN_00102ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010196f(0x30,param_2);
  uVar1 = FUN_001023ca(param_5);
  uVar2 = FUN_001023b8(param_4);
  uVar3 = FUN_001023a6(param_3);
  uVar4 = FUN_001022fa(param_2);
  uVar5 = FUN_0010336a(param_1);
                    /* try { // try from 00102d71 to 00102d75 has its CatchHandler @ 00102d78 */
  FUN_0010342d(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101e60(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001029b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103194(param_1,param_2);
  return;
}




undefined8 FUN_00101f32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  FUN_0010232e(param_1,uVar1);
  return param_1;
}




ulong FUN_00103e13(long param_1,ulong param_2,long param_3)

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




void FUN_0010179e(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9c(local_88);
                    /* try { // try from 001017d9 to 0010187c has its CatchHandler @ 001018c8 */
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101adc(local_58,local_88);
                    /* try { // try from 00101884 to 00101888 has its CatchHandler @ 001018b3 */
  FUN_00103acc(local_58);
  FUN_00101abc(local_58);
  FUN_00101abc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010190a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b23("Calling good()...");
  FUN_001018f5();
  FUN_00103b23("Finished good()");
  FUN_00103b23("Calling bad()...");
  FUN_00101509();
  FUN_00103b23("Finished bad()");
  return 0;
}




long FUN_00101ba0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e18(param_1,param_2);
  local_28 = FUN_00101e42(param_1);
  cVar2 = FUN_00101e60(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101e86(param_1);
    uVar3 = FUN_00101eac(&local_38);
    cVar2 = FUN_00101ece(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c40;
    }
  }
  bVar1 = true;
LAB_00101c40:
  if (bVar1) {
    uVar3 = FUN_00101ef5(param_2);
    FUN_00101f32(local_30,uVar3);
    FUN_00101f6a(&local_28,&local_38);
    local_38 = FUN_00101f8c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101eac(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010334b(undefined8 param_1)

{
  FUN_001019c5(param_1);
  return;
}




void FUN_00101d78(void)

{
  return;
}




void FUN_00102805(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010312e(param_1);
  FUN_00103150(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040d3(void)

{
  return;
}




undefined8 FUN_00103150(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103cff(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001039a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103815(param_3);
  puVar3 = (undefined8 *)FUN_0010196f(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103db3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




long FUN_00103038(long param_1)

{
  return param_1 + 0x18;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  FUN_00102c8c(param_1,uVar1);
  return;
}




long FUN_00102158(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001042ef(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001021e1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001040f4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103760(undefined8 param_1)

{
  return param_1;
}




void FUN_00101adc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ccc(param_1,param_2);
  return;
}




bool FUN_001041f8(pthread_t *param_1)

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




void FUN_00102e5a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010349d(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001037ac(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010409c(void)

{
  return;
}




void FUN_00104044(void)

{
  return;
}




void FUN_00101f08(undefined8 param_1,undefined8 param_2)

{
  FUN_00102366(param_1,param_2);
  return;
}




void FUN_00103c24(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103682(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023a6(param_3);
  uVar1 = FUN_001023b8(param_4);
  FUN_00101f08(local_38,uVar1);
  FUN_001023ca(param_5);
  uVar1 = FUN_0010196f(0x10,param_2);
                    /* try { // try from 0010370a to 0010370e has its CatchHandler @ 00103711 */
  FUN_001037c4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010336a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102af8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010336a(param_1);
  FUN_001033a6(uVar1,param_2,1);
  return;
}




void FUN_00103500(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010374d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010349d(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00101998(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_00102dc0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102942(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a5c(undefined8 param_1)

{
  FUN_00101b42(param_1);
  return;
}




void FUN_00103ca5(undefined4 param_1)

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




undefined8
FUN_00101f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001023ca(param_5);
  uVar2 = FUN_001023b8(param_4);
  uVar3 = FUN_001023a6(param_3);
  local_40 = FUN_001023dc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102008 to 0010204b has its CatchHandler @ 00102089 */
  uVar1 = FUN_00102805(local_40);
  local_38 = FUN_0010245c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010220e(param_1,local_40);
    FUN_00102942(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102858(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101d98(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001021e1(local_28);
    FUN_00101d98(param_1,uVar1);
    lVar2 = FUN_001021f7(local_28);
    FUN_0010220e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001043d0(void)

{
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e02(param_1);
  FUN_00101d98(param_1,uVar1);
  FUN_00101a5c(param_1);
  return;
}




undefined8 FUN_00102a0c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b32(param_1);
  uVar2 = FUN_001031a8(param_2);
  uVar1 = FUN_001031be(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103038(param_1);
  uVar2 = FUN_0010332d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e26(param_1);
  uVar2 = FUN_0010334b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103815(param_3);
  FUN_001039a0(param_1,param_2,uVar1);
  return;
}




void FUN_001040de(void)

{
  return;
}




void FUN_00102366(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c5c(param_2);
  uVar1 = FUN_00102c7a(uVar1);
  FUN_00102c8c(param_1,uVar1);
  return;
}




void FUN_00103bcf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_0010412b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040f4,local_18);
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




long FUN_00102b32(long param_1)

{
  return param_1 + 8;
}




void FUN_00101e18(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224c(param_1,param_2);
  return;
}




undefined8 FUN_001034b0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102942(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bf9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010407b(void)

{
  return;
}




void FUN_00102e3c(undefined8 param_1)

{
  FUN_00102805(param_1);
  return;
}




undefined8 FUN_001023dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102cb6(param_1);
  uVar2 = FUN_001023ca(param_4);
  uVar3 = FUN_001023b8(param_3);
  uVar4 = FUN_001023a6(param_2);
  FUN_00102ce2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001030ee(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010349d(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001021f7(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101b06(long param_1)

{
  FUN_00101d58(param_1);
  FUN_00101d78(param_1);
  FUN_001019f2(param_1 + 8);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined4 FUN_00101e86(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001022ec(param_1);
  return unaff_EBX;
}




void FUN_0010337c(undefined8 param_1,undefined8 param_2)

{
  FUN_001035f6(param_1,param_2);
  return;
}




void FUN_0010332d(undefined8 param_1)

{
  FUN_00101998(param_1);
  return;
}




undefined8 FUN_00102b48(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102805(local_38);
    cVar1 = FUN_00101ece(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001021e1(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001021f7(local_38);
    }
  }
  FUN_00102942(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001039f2(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101ba0(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete(local_18,8);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c5c(undefined8 param_1)

{
  FUN_001033ea(param_1);
  return;
}




void FUN_00103c7a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010405a(void)

{
  return;
}




long FUN_00102e26(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103874(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103926(param_2);
  puVar2 = (undefined4 *)FUN_00102c7a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001035e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001029da(void)

{
  return;
}




void FUN_001019f2(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a1c(param_1);
  return;
}




void FUN_00103632(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001037ac(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001022fa(long param_1)

{
  FUN_00102c06(param_1 + 0x20);
  return;
}




void FUN_0010432d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010304e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010349d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010349d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010342d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001023ca(param_5);
  uVar2 = FUN_001023b8(param_4);
  uVar3 = FUN_001023a6(param_3);
  FUN_00103682(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001023ca(undefined8 param_1)

{
  return param_1;
}




void FUN_001037c4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103874(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001031be(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103566(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001035ca(param_2);
                    /* try { // try from 0010322d to 001032bf has its CatchHandler @ 001032eb */
    uVar2 = FUN_001031be(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001035e0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103566(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001035ca(local_38);
      uVar2 = FUN_001031be(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001035e0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined4 * FUN_00103566(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010312e(param_2);
  puVar2 = (undefined4 *)FUN_00103772(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001020d2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102960(param_1,param_2);
  FUN_001029da(param_1,param_2);
  FUN_001019f2(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b42(undefined8 param_1)

{
  FUN_00101d88(param_1);
  return;
}




undefined8 FUN_00102960(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103166(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103828(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cb6(param_1);
  uVar2 = FUN_00103815(param_2);
  FUN_001038b8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001029ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010220e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ab4(param_1,param_2);
  FUN_00102af8(param_1,param_2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010245c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102dc0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b32(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e3c(local_50);
    cVar2 = FUN_00101ece(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e3c(local_50);
      cVar2 = FUN_00101ece(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001030ee(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e26(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e26(local_60);
          local_48[1] = 0;
          FUN_00102e5a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001030c2(local_48);
          uVar6 = FUN_00102e3c(*puVar5);
          cVar2 = FUN_00101ece(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102e9a(local_60,param_3);
          }
          else {
            lVar3 = FUN_001021e1(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102e5a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010304e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103038(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103038(local_60);
        uVar6 = FUN_00103038(local_60);
        FUN_0010304e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103096(local_48);
        uVar6 = FUN_00102e3c(*puVar5);
        cVar2 = FUN_00101ece(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102e9a(local_60,param_3);
        }
        else {
          lVar3 = FUN_001021e1(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102e5a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010304e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001027ea;
  }
  lVar3 = FUN_00102e10(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001024fe:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e26(local_60);
    uVar6 = FUN_00102e3c(*puVar5);
    cVar2 = FUN_00101ece(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001024fe;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e26(local_60);
    local_48[1] = 0;
    FUN_00102e5a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102e9a(local_60,param_3);
  }
LAB_001027ea:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103ba3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101509(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a9c(local_88);
                    /* try { // try from 00101544 to 001015e7 has its CatchHandler @ 00101633 */
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101ba0(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101adc(local_58,local_88);
                    /* try { // try from 001015ef to 001015f3 has its CatchHandler @ 0010161e */
  FUN_001039f2(local_58);
  FUN_00101abc(local_58);
  FUN_00101abc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104360(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a9c(undefined8 param_1)

{
  FUN_00101a7c(param_1);
  return;
}




void FUN_001033a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010360a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103ff6(void)

{
  return 1;
}




void FUN_00103548(undefined8 param_1)

{
  FUN_00103760(param_1);
  return;
}




void FUN_00101ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001020d2(param_1,param_2);
  lVar1 = FUN_00102142(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102158(param_1);
                    /* try { // try from 00101d27 to 00101d2b has its CatchHandler @ 00101d31 */
    uVar3 = FUN_0010216e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104070(void)

{
  return;
}




void FUN_001035f6(void)

{
  return;
}




void FUN_001038b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010196f(0x30,param_2);
  uVar1 = FUN_00103815(param_3);
  uVar2 = FUN_001022fa(param_2);
  uVar3 = FUN_0010336a(param_1);
  FUN_00103944(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101e02(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001023a6(undefined8 param_1)

{
  return param_1;
}




void FUN_0010430e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104039(void)

{
  return;
}




undefined8 FUN_001033d8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010312e(long param_1)

{
  FUN_00103548(param_1 + 0x20);
  return;
}




undefined8 FUN_00102e9a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101e02(param_1);
  local_50 = FUN_00102b32(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102805(local_58);
    local_59 = FUN_00101ece(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001021e1(local_58);
    }
    else {
      local_58 = FUN_001021f7(local_58);
    }
  }
  FUN_00102942(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001034b0(param_1);
    cVar1 = FUN_00101e60(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103500(local_38,&local_58,&local_50);
      goto LAB_0010301c;
    }
    FUN_00103096(&local_48);
  }
  uVar2 = FUN_00102e3c(local_48);
  cVar1 = FUN_00101ece(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001030ee(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103500(local_38,&local_58,&local_50);
  }
LAB_0010301c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103a5f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101ba0(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  if (local_18 != (void *)0x0) {
    operator_delete(local_18,8);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010232e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  FUN_00102c24(param_1,uVar1);
  return;
}




undefined8 * FUN_001030c2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102942(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00104276(undefined8 *param_1)

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




void FUN_001022ec(void)

{
  return;
}




void FUN_00101d88(void)

{
  return;
}




void FUN_00104065(void)

{
  return;
}




void FUN_001040c8(void)

{
  return;
}




void FUN_00102c8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_0010349d(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00103096(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001031a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101a7c(undefined8 param_1)

{
  FUN_00101b06(param_1);
  return;
}




int FUN_00104014(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001035ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103194(void)

{
  return;
}




undefined8 FUN_00102142(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010229c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102942(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c06(undefined8 param_1)

{
  FUN_001033d8(param_1);
  return;
}




undefined8 FUN_00104005(void)

{
  return 0;
}




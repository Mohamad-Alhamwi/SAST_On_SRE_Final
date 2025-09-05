
void FUN_001022c6(undefined8 param_1)

{
  FUN_001028d0(param_1);
  return;
}




void FUN_00103fdc(void)

{
  return;
}




void FUN_0010403f(void)

{
  return;
}




void FUN_001024fc(undefined8 param_1)

{
  FUN_00102043(param_1);
  return;
}




long FUN_001030e5(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103b5a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102804(long param_1)

{
  FUN_00102a52(param_1 + 0x20);
  return;
}




long FUN_001024e6(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001017d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a8a(param_1,param_2);
  return;
}




void FUN_00101ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010231c(param_2);
  uVar1 = FUN_0010233a(uVar1);
  FUN_0010234c(param_1,uVar1);
  return;
}




ulong FUN_00103d74(long param_1,ulong param_2,long param_3)

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




void FUN_0010426f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102be7(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101886(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101b5a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b38(long param_1)

{
  FUN_001022c6(param_1 + 0x20);
  return;
}




undefined8 FUN_00103f66(void)

{
  return 0;
}




void FUN_00103c88(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103f57(void)

{
  return 1;
}




void FUN_00103fb0(void)

{
  return;
}




void FUN_0010428e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103688(void)

{
  return;
}




undefined8
FUN_00101944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c08(param_5);
  uVar2 = FUN_00101bf6(param_4);
  uVar3 = FUN_00101be4(param_3);
  local_40 = FUN_00101c1a(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019c0 to 00101a03 has its CatchHandler @ 00101a41 */
  uVar1 = FUN_00102043(local_40);
  local_38 = FUN_00101c9a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102180(param_1,local_40);
    FUN_001021be(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102096(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00103466(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103fe7(void)

{
  return;
}




undefined8 FUN_00101bf6(undefined8 param_1)

{
  return param_1;
}




void FUN_00104330(void)

{
  return;
}




undefined8 FUN_0010408c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104055,local_18);
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




void FUN_00103c06(undefined4 param_1)

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




void FUN_0010270e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029a8(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029a8(param_3);
  param_1[1] = *puVar1;
  return;
}




ulong FUN_00103e78(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001028d0(undefined8 param_1)

{
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




void FUN_0010251a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029a8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00103986(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010167b(0x30,param_2);
  uVar1 = FUN_00103928(param_3);
  uVar2 = FUN_00101b38(param_2);
  uVar3 = FUN_001028f8(param_1);
  FUN_001039f4(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102a52(undefined8 param_1)

{
  FUN_00102bfa(param_1);
  return;
}




undefined8 FUN_0010369c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101ada(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021be(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cf5(undefined8 param_1)

{
  FUN_00102d13(param_1);
  return;
}




void FUN_00103adc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010313c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103ff2(void)

{
  return;
}




void FUN_00102938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c08(param_5);
  uVar2 = FUN_00101bf6(param_4);
  uVar3 = FUN_00101be4(param_3);
  FUN_00102b1c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103a84(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102826(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102043(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102804(param_1);
  FUN_00102826(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104013(void)

{
  return;
}




void FUN_001023a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010167b(0x30,param_2);
  uVar1 = FUN_00101c08(param_5);
  uVar2 = FUN_00101bf6(param_4);
  uVar3 = FUN_00101be4(param_3);
  uVar4 = FUN_00101b38(param_2);
  uVar5 = FUN_001028f8(param_1);
                    /* try { // try from 00102431 to 00102435 has its CatchHandler @ 00102438 */
  FUN_00102938(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010317c(undefined8 param_1)

{
  FUN_00103262(param_1);
  return;
}




undefined8 FUN_00102480(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021be(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c20(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_001026f8(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104008(void)

{
  return;
}




void FUN_00101a8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021f2(param_1);
  uVar2 = FUN_001021dc(param_1);
  FUN_00102208(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101b2a(void)

{
  return;
}




long FUN_001021f2(long param_1)

{
  return param_1 + 8;
}




void FUN_00103556(undefined8 param_1,undefined8 param_2)

{
  FUN_00103688(param_1,param_2);
  return;
}




void FUN_001022e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b5a(param_2);
  FUN_0010234c(param_1,uVar1);
  return;
}




void FUN_00102b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101be4(param_3);
  uVar1 = FUN_00101bf6(param_4);
  FUN_001018c0(local_38,uVar1);
  FUN_00101c08(param_5);
  uVar1 = FUN_0010167b(0x10,param_2);
                    /* try { // try from 00102ba4 to 00102ba8 has its CatchHandler @ 00102bab */
  FUN_00102c60(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_0010183e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b2a(param_1);
  return unaff_EBX;
}




void FUN_001033f6(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103505(param_1,param_2);
  FUN_00103580(param_1,param_2);
  FUN_00103112(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fd1(void)

{
  return;
}




void FUN_00103cb3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103ffd(void)

{
  return;
}




void FUN_00101864(undefined8 *param_1)

{
  FUN_00101b38(*param_1);
  return;
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
  puVar1 = (undefined8 *)FUN_001016a4(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_80,local_78);
  FUN_00103a84(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103282(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021dc(param_1);
  FUN_0010338c(param_1,uVar1);
  FUN_0010317c(param_1);
  return;
}




undefined8 FUN_001018ad(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103053(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a84("Calling good()...");
  FUN_00103043();
  FUN_00103a84("Finished good()");
  FUN_00103a84("Calling bad()...");
  FUN_00102d31();
  FUN_00103a84("Finished bad()");
  return 0;
}




void FUN_001027c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029a8(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010283c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b38(param_2);
  uVar2 = FUN_001028f8(param_1);
  FUN_00102a70(uVar2,uVar1);
  return;
}




void FUN_00103aaa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8
FUN_00102096(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021f2(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024fc(param_3);
      uVar5 = FUN_00102043(param_4);
      cVar1 = FUN_00101886(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010211a;
      }
    }
  }
  bVar2 = true;
LAB_0010211a:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021be(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103226(long param_1)

{
  FUN_0010334c(param_1);
  FUN_0010336c(param_1);
  FUN_00103112(param_1 + 8);
  return;
}




void FUN_00103b04(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
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




void FUN_00104055(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010255a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001021dc(param_1);
  local_50 = FUN_001021f2(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102043(local_58);
    local_59 = FUN_00101886(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102782(local_58);
    }
    else {
      local_58 = FUN_001028ba(local_58);
    }
  }
  FUN_001021be(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029ba(param_1);
    cVar1 = FUN_00101818(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a0a(local_38,&local_58,&local_50);
      goto LAB_001026dc;
    }
    FUN_00102756(&local_48);
  }
  uVar2 = FUN_001024fc(local_48);
  cVar1 = FUN_00101886(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027c4(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a0a(local_38,&local_58,&local_50);
  }
LAB_001026dc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103fa5(void)

{
  return;
}




void FUN_00103a32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103928(param_3);
  puVar3 = (undefined8 *)FUN_0010167b(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001017fa(undefined8 param_1)

{
  FUN_00101ada(param_1);
  return;
}




void FUN_00103580(void)

{
  return;
}




void FUN_00102d13(undefined8 param_1)

{
  FUN_0010231c(param_1);
  return;
}




undefined4 * FUN_0010385e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102804(param_2);
  puVar2 = (undefined4 *)FUN_001038ee(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101b6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b5a(param_2);
  FUN_001022e4(param_1,uVar1);
  return;
}




void FUN_001015e2(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_001016a4(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strcpy(local_80,local_78);
  FUN_00103a84(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010319c(undefined8 param_1)

{
  FUN_00103226(param_1);
  return;
}




undefined8 FUN_00101c08(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fc6(void)

{
  return;
}




undefined8 * FUN_00102756(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010233a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cb2(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102cf5(param_2);
  puVar2 = (undefined4 *)FUN_0010233a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c60(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001029ba(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021be(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f8f(void)

{
  return;
}




undefined8 FUN_001018ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b5a(param_2);
  FUN_00101b6c(param_1,uVar1);
  return param_1;
}




long FUN_001016a4(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001017d0(param_1,param_2);
  local_28 = FUN_001017fa(param_1);
  cVar2 = FUN_00101818(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010183e(param_1);
    uVar3 = FUN_00101864(&local_38);
    cVar2 = FUN_00101886(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101744;
    }
  }
  bVar1 = true;
LAB_00101744:
  if (bVar1) {
    uVar3 = FUN_001018ad(param_2);
    FUN_001018ea(local_30,uVar3);
    FUN_00101922(&local_28,&local_38);
    local_38 = FUN_00101944(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101864(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102d31(void)

{
  void *__s;
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031bc(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  lVar1 = (long)__s + -8;
  local_58[0] = 0;
                    /* try { // try from 00102dda to 00102e43 has its CatchHandler @ 00102e8f */
  plVar2 = (long *)FUN_001016a4(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 1;
  plVar2 = (long *)FUN_001016a4(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 2;
  plVar2 = (long *)FUN_001016a4(local_88,local_58);
  *plVar2 = lVar1;
  FUN_001031fc(local_58,local_88);
                    /* try { // try from 00102e4b to 00102e4f has its CatchHandler @ 00102e7a */
  FUN_00101549(local_58);
  FUN_001031dc(local_58);
  FUN_001031dc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102376(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028f8(param_1);
  FUN_0010290a(uVar1,1);
  return;
}




void FUN_0010383f(undefined8 param_1)

{
  FUN_001030e5(param_1);
  return;
}




void FUN_00103f9a(void)

{
  return;
}




void FUN_00104250(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001031fc(undefined8 param_1,undefined8 param_2)

{
  FUN_001032c0(param_1,param_2);
  return;
}




void FUN_00102a9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c20(param_1,param_2,param_3);
  return;
}




void FUN_0010337c(void)

{
  return;
}




void FUN_00102880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028f8(param_1);
  FUN_00102a9a(uVar1,param_2,1);
  return;
}




void FUN_001031bc(undefined8 param_1)

{
  FUN_0010319c(param_1);
  return;
}




void FUN_00102180(undefined8 param_1,undefined8 param_2)

{
  FUN_0010283c(param_1,param_2);
  FUN_00102880(param_1,param_2);
  return;
}




void FUN_001018c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ba4(param_1,param_2);
  return;
}




undefined8 FUN_001024d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103594(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00103505(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010365a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102ebc(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031bc(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f61 to 00102fca has its CatchHandler @ 00103016 */
  puVar1 = (undefined8 *)FUN_001016a4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_001016a4(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_001016a4(local_88,local_58);
  *puVar1 = __s;
  FUN_001031fc(local_58,local_88);
                    /* try { // try from 00102fd2 to 00102fd6 has its CatchHandler @ 00103001 */
  FUN_001015e2(local_58);
  FUN_001031dc(local_58);
  FUN_001031dc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_001030b8(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103fbb(void)

{
  return;
}




bool FUN_00104159(pthread_t *param_1)

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




void FUN_001031dc(undefined8 param_1)

{
  FUN_00103282(param_1);
  return;
}




void FUN_00103bb0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103928(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c48(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101be4(undefined8 param_1)

{
  return param_1;
}




void FUN_001039f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103928(param_3);
  FUN_00103a32(param_1,param_2,uVar1);
  return;
}




void FUN_0010290a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102acc(param_1,param_2,0);
  return;
}




void FUN_001032c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033f6(param_1,param_2);
  lVar1 = FUN_00103466(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010347c(param_1);
                    /* try { // try from 0010331b to 0010331f has its CatchHandler @ 00103325 */
    uVar3 = FUN_00103492(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_001036b2(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010385e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038c2(param_2);
                    /* try { // try from 00103721 to 001037b3 has its CatchHandler @ 001037df */
    uVar2 = FUN_001036b2(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038d8(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010385e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038c2(local_38);
      uVar2 = FUN_001036b2(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038d8(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102a70(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c0c(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00103b30(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001034f6(void)

{
  return;
}




undefined8 FUN_001038d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102782(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001021be(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c0c(void)

{
  return;
}




void FUN_00103b85(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102c60(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cb2(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001028ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102acc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c48(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00101922(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




int FUN_00103f75(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102480(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021f2(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024fc(local_50);
    cVar2 = FUN_00101886(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024fc(local_50);
      cVar2 = FUN_00101886(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027c4(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024e6(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024e6(local_60);
          local_48[1] = 0;
          FUN_0010251a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102798(local_48);
          uVar6 = FUN_001024fc(*puVar5);
          cVar2 = FUN_00101886(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010255a(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102782(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010251a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_0010270e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026f8(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026f8(local_60);
        uVar6 = FUN_001026f8(local_60);
        FUN_0010270e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102756(local_48);
        uVar6 = FUN_001024fc(*puVar5);
        cVar2 = FUN_00101886(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010255a(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102782(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010251a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_0010270e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102028;
  }
  lVar3 = FUN_001024d0(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d3c:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024e6(local_60);
    uVar6 = FUN_001024fc(*puVar5);
    cVar2 = FUN_00101886(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d3c;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024e6(local_60);
    local_48[1] = 0;
    FUN_0010251a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010255a(local_60,param_3);
  }
LAB_00102028:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_001035b2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021f2(param_1);
  uVar2 = FUN_0010369c(param_2);
  uVar1 = FUN_001036b2(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026f8(param_1);
  uVar2 = FUN_00103821(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024e6(param_1);
  uVar2 = FUN_0010383f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010401e(void)

{
  return;
}




undefined8 FUN_001038c2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102208(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102043(local_38);
    cVar1 = FUN_00101886(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102782(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028ba(local_38);
    }
  }
  FUN_001021be(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001041d7(undefined8 *param_1)

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




undefined8 FUN_0010393a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102376(param_1);
  uVar2 = FUN_00103928(param_2);
  FUN_00103986(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103bdb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010234c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b5a(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_0010167b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a0a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102be7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029a8(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010404a(void)

{
  return;
}




undefined8 FUN_0010365a(undefined8 param_1,undefined8 param_2)

{
  FUN_00103556(param_1,param_2);
  return param_1;
}




void FUN_0010338c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102782(local_28);
    FUN_0010338c(param_1,uVar1);
    lVar2 = FUN_001028ba(local_28);
    FUN_00102180(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103262(undefined8 param_1)

{
  FUN_0010337c(param_1);
  return;
}




void FUN_00103d14(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001029a8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010336c(void)

{
  return;
}




undefined8 FUN_00102bfa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028f8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010231c(undefined8 param_1)

{
  FUN_001028e2(param_1);
  return;
}




undefined8 FUN_001041b4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103112(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010313c(param_1);
  return;
}




void FUN_00103821(undefined8 param_1)

{
  FUN_001030b8(param_1);
  return;
}




void FUN_0010334c(undefined8 param_1)

{
  FUN_001034f6(param_1);
  return;
}




void FUN_00103492(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103594(local_18,param_1);
  FUN_001035b2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c1a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102376(param_1);
  uVar2 = FUN_00101c08(param_4);
  uVar3 = FUN_00101bf6(param_3);
  uVar4 = FUN_00101be4(param_2);
  FUN_001023a2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104034(void)

{
  return;
}




void FUN_001038ee(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103928(param_2);
  FUN_0010393a(uVar1,uVar2);
  return;
}




long FUN_0010347c(long param_1)

{
  return param_1 + 0x10;
}




undefined8 * FUN_00102798(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101691(void)

{
  return;
}




undefined8 FUN_001028e2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103043(void)

{
  FUN_00102ebc();
  return;
}




void FUN_00104029(void)

{
  return;
}




undefined8 FUN_00101818(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




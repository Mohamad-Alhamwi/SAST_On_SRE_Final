
void FUN_001023c6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd4(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103fec(void)

{
  return;
}




bool FUN_0010413d(pthread_t *param_1)

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




void FUN_00102788(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a22(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a22(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103180(undefined8 param_1)

{
  FUN_0010320a(param_1);
  return;
}




void FUN_00103bea(undefined4 param_1)

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




undefined8 FUN_00102934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00102772(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001018de(undefined8 *param_1)

{
  FUN_00101bb2(*param_1);
  return;
}




undefined8 FUN_00101c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023f0(param_1);
  uVar2 = FUN_00101c82(param_4);
  uVar3 = FUN_00101c70(param_3);
  uVar4 = FUN_00101c5e(param_2);
  FUN_0010241c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




int FUN_00103f59(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010199c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102cc2(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00101c70(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c5e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f89(void)

{
  return;
}




ulong FUN_00103d58(long param_1,ulong param_2,long param_3)

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




void FUN_00103f7e(void)

{
  return;
}




void FUN_00103fc0(void)

{
  return;
}




void FUN_00103823(undefined8 param_1)

{
  FUN_001030c9(param_1);
  return;
}




void FUN_00101bb2(long param_1)

{
  FUN_00102340(param_1 + 0x20);
  return;
}




undefined8 FUN_001034e9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010363e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103ff7(void)

{
  return;
}




void FUN_001020bd(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010287e(param_1);
  FUN_001028a0(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104234(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103cc5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010283e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a22(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103f73(void)

{
  return;
}




void FUN_001029b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c82(param_5);
  uVar2 = FUN_00101c70(param_4);
  uVar3 = FUN_00101c5e(param_3);
  FUN_00102b96(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010170b(void)

{
  return;
}




undefined8 * FUN_001027d0(undefined8 *param_1)

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




void FUN_00103a8e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c5e(param_3);
  uVar1 = FUN_00101c70(param_4);
  FUN_0010193a(local_38,uVar1);
  FUN_00101c82(param_5);
  uVar1 = FUN_001016f5(0x10,param_2);
                    /* try { // try from 00102c1e to 00102c22 has its CatchHandler @ 00102c25 */
  FUN_00102cda(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103842(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010287e(param_2);
  puVar2 = (undefined4 *)FUN_001038d2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101be6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd4(param_2);
  FUN_0010235e(param_1,uVar1);
  return;
}




void FUN_00103027(void)

{
  FUN_00102ee9();
  return;
}




void FUN_00103b69(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001031c0(undefined8 param_1)

{
  FUN_00103266(param_1);
  return;
}




void FUN_00104002(void)

{
  return;
}




void FUN_00102acc(undefined8 param_1)

{
  FUN_00102c74(param_1);
  return;
}




void FUN_00103b14(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010294a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102256(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104023(void)

{
  return;
}




void FUN_00102576(undefined8 param_1)

{
  FUN_001020bd(param_1);
  return;
}




void FUN_001031e0(undefined8 param_1,undefined8 param_2)

{
  FUN_001032a4(param_1,param_2);
  return;
}




void FUN_00102594(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a22(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102d6f(undefined8 param_1)

{
  FUN_00102d8d(param_1);
  return;
}




undefined8 * FUN_00102812(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104018(void)

{
  return;
}




undefined8 FUN_00101bd4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102396(param_2);
  uVar1 = FUN_001023b4(uVar1);
  FUN_001023c6(param_1,uVar1);
  return;
}




void FUN_00102396(undefined8 param_1)

{
  FUN_0010295c(param_1);
  return;
}




undefined8 FUN_0010363e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010353a(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_001023f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102972(param_1);
  FUN_00102984(uVar1,1);
  return;
}




void FUN_00102c9a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010193a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c1e(param_1,param_2);
  return;
}




void FUN_001034da(void)

{
  return;
}




void FUN_00103fe1(void)

{
  return;
}




ulong FUN_00103e5c(long param_1,ulong param_2,long param_3)

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




void FUN_0010400d(void)

{
  return;
}




undefined8 FUN_00101964(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd4(param_2);
  FUN_00101be6(param_1,uVar1);
  return param_1;
}




long FUN_0010171e(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_0010184a(param_1,param_2);
  local_28 = FUN_00101874(param_1);
  cVar2 = FUN_00101892(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018b8(param_1);
    uVar3 = FUN_001018de(&local_38);
    cVar2 = FUN_00101900(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017be;
    }
  }
  bVar1 = true;
LAB_001017be:
  if (bVar1) {
    uVar3 = FUN_00101927(param_2);
    FUN_00101964(local_30,uVar3);
    FUN_0010199c(&local_28,&local_38);
    local_38 = FUN_001019be(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018de(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103360(void)

{
  return;
}




undefined8
FUN_001019be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c82(param_5);
  uVar2 = FUN_00101c70(param_4);
  uVar3 = FUN_00101c5e(param_3);
  local_40 = FUN_00101c94(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a3a to 00101a7d has its CatchHandler @ 00101abb */
  uVar1 = FUN_001020bd(local_40);
  local_38 = FUN_00101d14(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021fa(param_1,local_40);
    FUN_00102238(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102110(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103120(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001028fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102972(param_1);
  FUN_00102b14(uVar1,param_2,1);
  return;
}




undefined8 FUN_0010295c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103b3e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_0010226c(long param_1)

{
  return param_1 + 8;
}




void FUN_00103330(undefined8 param_1)

{
  FUN_001034da(param_1);
  return;
}




void FUN_00103b94(undefined8 param_1)

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




undefined8 FUN_001041bb(undefined8 *param_1)

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




undefined8 FUN_001027fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103fb5(void)

{
  return;
}




void FUN_00103ae8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 FUN_00101900(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010366c(void)

{
  return;
}




undefined8 FUN_00103037(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a68("Calling good()...");
  FUN_00103027();
  FUN_00103a68("Finished good()");
  FUN_00103a68("Calling bad()...");
  FUN_00102dab();
  FUN_00103a68("Finished bad()");
  return 0;
}




undefined8 FUN_0010390c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c82(undefined8 param_1)

{
  return param_1;
}




void FUN_0010184a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b04(param_1,param_2);
  return;
}




void FUN_0010320a(long param_1)

{
  FUN_00103330(param_1);
  FUN_00103350(param_1);
  FUN_001030f6(param_1 + 8);
  return;
}




undefined8
FUN_00102110(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010226c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102576(param_3);
      uVar5 = FUN_001020bd(param_4);
      cVar1 = FUN_00101900(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102194;
      }
    }
  }
  bVar2 = true;
LAB_00102194:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102238(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103fd6(void)

{
  return;
}




void FUN_0010287e(long param_1)

{
  FUN_00102acc(param_1 + 0x20);
  return;
}




undefined8 FUN_001024fa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102238(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010235e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd4(param_2);
  FUN_001023c6(param_1,uVar1);
  return;
}




void FUN_00102ee9(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(local_88);
                    /* try { // try from 00102f24 to 00102fae has its CatchHandler @ 00102ffa */
  pvVar1 = operator_new__(0xb);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031e0(local_58,local_88);
                    /* try { // try from 00102fb6 to 00102fba has its CatchHandler @ 00102fe5 */
  FUN_0010161f(local_58);
  FUN_001031c0(local_58);
  FUN_001031c0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cf8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c9a(param_1,param_2,param_3);
  return;
}




void FUN_00103f9f(void)

{
  return;
}




undefined8 FUN_00101b54(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102238(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_001018b8(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ba4(param_1);
  return unaff_EBX;
}




long FUN_0010309c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




long FUN_00102560(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001038d2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010390c(param_2);
  FUN_0010391e(uVar1,uVar2);
  return;
}




void FUN_00103faa(void)

{
  return;
}




void FUN_00104310(void)

{
  return;
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033da(param_1,param_2);
  lVar1 = FUN_0010344a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103460(param_1);
                    /* try { // try from 001032ff to 00103303 has its CatchHandler @ 00103309 */
    uVar3 = FUN_00103476(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00102c74(undefined8 param_1)

{
  return param_1;
}




long FUN_00103460(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102972(undefined8 param_1)

{
  return param_1;
}




void FUN_00103246(undefined8 param_1)

{
  FUN_00103360(param_1);
  return;
}




undefined8 FUN_00102282(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020bd(local_38);
    cVar1 = FUN_00101900(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027fc(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102934(local_38);
    }
  }
  FUN_00102238(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101549(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_3c;
  ulong local_38;
  void *local_30;
  size_t local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 2;
  plVar1 = (long *)FUN_0010171e(param_1,&local_3c);
  local_30 = (void *)*plVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  local_28 = strlen(local_1b);
  for (local_38 = 0; local_38 < local_28 + 1; local_38 = local_38 + 1) {
    *(char *)((long)local_30 + local_38) = local_1b[local_38];
  }
  FUN_00103a68(local_30);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010226c(param_1);
  uVar2 = FUN_00102256(param_1);
  FUN_00102282(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_001025d4(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102256(param_1);
  local_50 = FUN_0010226c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020bd(local_58);
    local_59 = FUN_00101900(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027fc(local_58);
    }
    else {
      local_58 = FUN_00102934(local_58);
    }
  }
  FUN_00102238(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a34(param_1);
    cVar1 = FUN_00101892(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a84(local_38,&local_58,&local_50);
      goto LAB_00102756;
    }
    FUN_001027d0(&local_48);
  }
  uVar2 = FUN_00102576(local_48);
  cVar1 = FUN_00101900(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010283e(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a84(local_38,&local_58,&local_50);
  }
LAB_00102756:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103596(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010226c(param_1);
  uVar2 = FUN_00103680(param_2);
  uVar1 = FUN_00103696(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102772(param_1);
  uVar2 = FUN_00103805(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102560(param_1);
  uVar2 = FUN_00103823(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




long FUN_001030c9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103f3b(void)

{
  return 1;
}




void FUN_00103160(undefined8 param_1)

{
  FUN_00103246(param_1);
  return;
}




void FUN_00103fcb(void)

{
  return;
}




void FUN_00104253(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103266(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102256(param_1);
  FUN_00103370(param_1,uVar1);
  FUN_00103160(param_1);
  return;
}




void FUN_00103c6c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103a16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010390c(param_3);
  puVar3 = (undefined8 *)FUN_001016f5(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102d8d(undefined8 param_1)

{
  FUN_00102396(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024fa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010226c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102576(local_50);
    cVar2 = FUN_00101900(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102576(local_50);
      cVar2 = FUN_00101900(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010283e(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102560(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102560(local_60);
          local_48[1] = 0;
          FUN_00102594(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102812(local_48);
          uVar6 = FUN_00102576(*puVar5);
          cVar2 = FUN_00101900(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025d4(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027fc(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102594(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102788(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102772(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102772(local_60);
        uVar6 = FUN_00102772(local_60);
        FUN_00102788(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027d0(local_48);
        uVar6 = FUN_00102576(*puVar5);
        cVar2 = FUN_00101900(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025d4(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027fc(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102594(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102788(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020a2;
  }
  lVar3 = FUN_0010254a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101db6:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102560(local_60);
    uVar6 = FUN_00102576(*puVar5);
    cVar2 = FUN_00101900(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101db6;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102560(local_60);
    local_48[1] = 0;
    FUN_00102594(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025d4(local_60,param_3);
  }
LAB_001020a2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103ac0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_00102a84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c61(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a22(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103370(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027fc(local_28);
    FUN_00103370(param_1,uVar1);
    lVar2 = FUN_00102934(local_28);
    FUN_001021fa(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001038a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102c61(undefined8 param_1)

{
  return param_1;
}




void FUN_0010161f(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_3c;
  ulong local_38;
  void *local_30;
  size_t local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 2;
  plVar1 = (long *)FUN_0010171e(param_1,&local_3c);
  local_30 = (void *)*plVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  local_28 = strlen(local_1b);
  for (local_38 = 0; local_38 < local_28 + 1; local_38 = local_38 + 1) {
    *(char *)((long)local_30 + local_38) = local_1b[local_38];
  }
  FUN_00103a68(local_30);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bbf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103578(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010396a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016f5(0x30,param_2);
  uVar1 = FUN_0010390c(param_3);
  uVar2 = FUN_00101bb2(param_2);
  uVar3 = FUN_00102972(param_1);
  FUN_001039d8(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001028a0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102340(undefined8 param_1)

{
  FUN_0010294a(param_1);
  return;
}




void FUN_00102d2c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d6f(param_2);
  puVar2 = (undefined4 *)FUN_001023b4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c44(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102dab(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(local_88);
                    /* try { // try from 00102de6 to 00102e70 has its CatchHandler @ 00102ebc */
  pvVar1 = operator_new__(10);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010171e(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001031e0(local_58,local_88);
                    /* try { // try from 00102e78 to 00102e7c has its CatchHandler @ 00102ea7 */
  FUN_00101549(local_58);
  FUN_001031c0(local_58);
  FUN_001031c0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102984(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b46(param_1,param_2,0);
  return;
}




void FUN_00102c86(void)

{
  return;
}




undefined8 FUN_001016f5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ba4(void)

{
  return;
}




void FUN_00103f94(void)

{
  return;
}




void FUN_00102238(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00103696(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103842(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038a6(param_2);
                    /* try { // try from 00103705 to 00103797 has its CatchHandler @ 001037c3 */
    uVar2 = FUN_00103696(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038bc(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103842(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038a6(local_38);
      uVar2 = FUN_00103696(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038bc(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010402e(void)

{
  return;
}




undefined8 FUN_0010391e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023f0(param_1);
  uVar2 = FUN_0010390c(param_2);
  FUN_0010396a(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001023b4(undefined8 param_1)

{
  return param_1;
}




void FUN_001042a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a68(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103c97(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010254a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101874(undefined8 param_1)

{
  FUN_00101b54(param_1);
  return;
}




void FUN_00102b46(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cc2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00104198(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103805(undefined8 param_1)

{
  FUN_0010309c(param_1);
  return;
}




void FUN_00103476(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103578(local_18,param_1);
  FUN_00103596(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103350(void)

{
  return;
}




undefined8 FUN_00103f4a(void)

{
  return 0;
}




void FUN_00102aea(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c86(param_1,param_2);
  return;
}




undefined8 FUN_0010344a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102cda(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d2c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a34(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102238(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010241c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016f5(0x30,param_2);
  uVar1 = FUN_00101c82(param_5);
  uVar2 = FUN_00101c70(param_4);
  uVar3 = FUN_00101c5e(param_3);
  uVar4 = FUN_00101bb2(param_2);
  uVar5 = FUN_00102972(param_1);
                    /* try { // try from 001024ab to 001024af has its CatchHandler @ 001024b2 */
  FUN_001029b2(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104272(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001031a0(undefined8 param_1)

{
  FUN_00103180(param_1);
  return;
}




undefined8 FUN_001038bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033da(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034e9(param_1,param_2);
  FUN_00103564(param_1,param_2);
  FUN_001030f6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103564(void)

{
  return;
}




void FUN_001021fa(undefined8 param_1,undefined8 param_2)

{
  FUN_001028b6(param_1,param_2);
  FUN_001028fa(param_1,param_2);
  return;
}




undefined8 FUN_00104070(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104039,local_18);
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




void FUN_001039d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390c(param_3);
  FUN_00103a16(param_1,param_2,uVar1);
  return;
}




void FUN_0010353a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010366c(param_1,param_2);
  return;
}




void FUN_001028b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bb2(param_2);
  uVar2 = FUN_00102972(param_1);
  FUN_00102aea(uVar2,uVar1);
  return;
}




undefined8 FUN_00101892(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00102a22(undefined8 param_1)

{
  return param_1;
}




void FUN_001030f6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103120(param_1);
  return;
}




void FUN_00104039(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101927(undefined8 param_1)

{
  return param_1;
}




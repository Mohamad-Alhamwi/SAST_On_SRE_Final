
void FUN_00101c92(void)

{
  return;
}




void FUN_00103d93(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104057(void)

{
  return;
}




undefined8 FUN_00101e0f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ba6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102236(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103742(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bd0(param_1);
  uVar2 = FUN_0010372f(param_2);
  FUN_001037d2(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001020ec(void)

{
  return;
}




undefined4 FUN_00101de8(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103b5c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010190c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101936(param_1);
  return;
}




void FUN_001040af(void)

{
  return;
}




void FUN_001040db(void)

{
  return;
}




void FUN_0010285c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104302(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_001018b1(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010189e(void)

{
  return;
}




void FUN_00103be2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001038ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010372f(param_3);
  puVar3 = (undefined8 *)FUN_00101888(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103bb6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cb8(undefined4 param_1)

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




void FUN_001040ba(void)

{
  return;
}




void FUN_00103319(undefined8 param_1,undefined8 param_2)

{
  FUN_0010354c(param_1,param_2,0);
  return;
}




void FUN_001040e6(void)

{
  return;
}




undefined8 FUN_0010413e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104107,local_18);
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




void FUN_001016a0(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019b6(local_88);
                    /* try { // try from 001016db to 0010179a has its CatchHandler @ 001017e6 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101aba(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101aba(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101aba(local_88,local_58);
  *puVar1 = __s;
  FUN_001019f6(local_58,local_88);
                    /* try { // try from 001017a2 to 001017a6 has its CatchHandler @ 001017d1 */
  FUN_00103a21(local_58);
  FUN_001019d6(local_58);
  FUN_001019d6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030ae(void)

{
  return;
}




void FUN_00103dc6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101976(undefined8 param_1)

{
  FUN_00101a5c(param_1);
  return;
}




void FUN_001040d0(void)

{
  return;
}




void FUN_00104078(void)

{
  return;
}




void FUN_0010385e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010372f(param_3);
  FUN_001038ba(param_1,param_2,uVar1);
  return;
}




undefined8
FUN_00101ea6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022e4(param_5);
  uVar2 = FUN_001022d2(param_4);
  uVar3 = FUN_001022c0(param_3);
  local_40 = FUN_001022f6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f22 to 00101f65 has its CatchHandler @ 00101fa3 */
  uVar1 = FUN_0010271f(local_40);
  local_38 = FUN_00102376(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102128(param_1,local_40);
    FUN_0010285c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102772(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103b8e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001021b6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010285c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102280(param_1,param_2);
  return;
}




void FUN_0010354c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036c6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_001022e4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103347(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022e4(param_5);
  uVar2 = FUN_001022d2(param_4);
  uVar3 = FUN_001022c0(param_3);
  FUN_0010359c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00101823(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b36("Calling good()...");
  FUN_00101813();
  FUN_00103b36("Finished good()");
  FUN_00103b36("Calling bad()...");
  FUN_00101529();
  FUN_00103b36("Finished bad()");
  return 0;
}




void FUN_00102a12(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103284(param_1);
  FUN_001032c0(uVar1,param_2,1);
  return;
}




undefined8 FUN_001036c6(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101888(0x30,param_2);
  uVar1 = FUN_001022e4(param_5);
  uVar2 = FUN_001022d2(param_4);
  uVar3 = FUN_001022c0(param_3);
  uVar4 = FUN_00102214(param_2);
  uVar5 = FUN_00103284(param_1);
                    /* try { // try from 00102c8b to 00102c8f has its CatchHandler @ 00102c92 */
  FUN_00103347(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




ulong FUN_00103e26(long param_1,ulong param_2,long param_3)

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




void FUN_00102248(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102236(param_2);
  FUN_00102b3e(param_1,uVar1);
  return;
}




undefined8 FUN_0010367a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001020fb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001019f6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101be6(param_1,param_2);
  return;
}




undefined8 FUN_00104018(void)

{
  return 0;
}




undefined8 FUN_00101d7a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00102cda(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010285c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_00101da0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102206(param_1);
  return unaff_EBX;
}




void FUN_001028f4(void)

{
  return;
}




void FUN_00101e84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104009(void)

{
  return 1;
}




void FUN_00101813(void)

{
  FUN_001016a0();
  return;
}




undefined8 FUN_00101888(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101be6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fec(param_1,param_2);
  lVar1 = FUN_0010205c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102072(param_1);
                    /* try { // try from 00101c41 to 00101c45 has its CatchHandler @ 00101c4b */
    uVar3 = FUN_00102088(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103284(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ca2(void)

{
  return;
}




undefined8
FUN_00102772(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a4c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d56(param_3);
      uVar5 = FUN_0010271f(param_4);
      cVar1 = FUN_00101de8(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027f6;
      }
    }
  }
  bVar2 = true;
LAB_001027f6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010285c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001040fc(void)

{
  return;
}




undefined8 FUN_00103080(undefined8 param_1,undefined8 param_2)

{
  FUN_001028ca(param_1,param_2);
  return param_1;
}




void FUN_00103d65(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010390c(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_00101aba(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103b36(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103f2a(long param_1,ulong param_2,long param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102f68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033b7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033b7(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102b76(undefined8 param_1)

{
  FUN_00103304(param_1);
  return;
}




void FUN_00102088(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102908(local_18,param_1);
  FUN_00102926(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104340(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102111(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




bool FUN_0010420b(pthread_t *param_1)

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




void FUN_0010368c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010372f(param_2);
  FUN_00103742(uVar1,uVar2);
  return;
}




void FUN_00101a20(long param_1)

{
  FUN_00101c72(param_1);
  FUN_00101c92(param_1);
  FUN_0010190c(param_1 + 8);
  return;
}




undefined8 FUN_00104289(undefined8 *param_1)

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




undefined8 FUN_00102db4(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101d1c(param_1);
  local_50 = FUN_00102a4c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010271f(local_58);
    local_59 = FUN_00101de8(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020fb(local_58);
    }
    else {
      local_58 = FUN_00102111(local_58);
    }
  }
  FUN_0010285c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033ca(param_1);
    cVar1 = FUN_00101d7a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010341a(local_38,&local_58,&local_50);
      goto LAB_00102f36;
    }
    FUN_00102fb0(&local_48);
  }
  uVar2 = FUN_00102d56(local_48);
  cVar1 = FUN_00101de8(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103008(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010341a(local_38,&local_58,&local_50);
  }
LAB_00102f36:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001036de(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010378e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040c5(void)

{
  return;
}




void FUN_0010406d(void)

{
  return;
}




undefined8 FUN_00101e4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102236(param_2);
  FUN_00102248(param_1,uVar1);
  return param_1;
}




void FUN_00103c8d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103667(undefined8 param_1)

{
  return param_1;
}




void FUN_00103296(undefined8 param_1,undefined8 param_2)

{
  FUN_00103510(param_1,param_2);
  return;
}




long FUN_00102a4c(long param_1)

{
  return param_1 + 8;
}




void FUN_00103462(undefined8 param_1)

{
  FUN_0010367a(param_1);
  return;
}




long FUN_001018de(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102d2a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101a20(param_1);
  return;
}




void FUN_00103d3a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101fec(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010287a(param_1,param_2);
  FUN_001028f4(param_1,param_2);
  FUN_0010190c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00101aba(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d32(param_1,param_2);
  local_28 = FUN_00101d5c(param_1);
  cVar2 = FUN_00101d7a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101da0(param_1);
    uVar3 = FUN_00101dc6(&local_38);
    cVar2 = FUN_00101de8(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b5a;
    }
  }
  bVar1 = true;
LAB_00101b5a:
  if (bVar1) {
    uVar3 = FUN_00101e0f(param_2);
    FUN_00101e4c(local_30,uVar3);
    FUN_00101e84(&local_28,&local_38);
    local_38 = FUN_00101ea6(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101dc6(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001029ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102214(param_2);
  uVar2 = FUN_00103284(param_1);
  FUN_00103296(uVar2,uVar1);
  return;
}




void FUN_0010389b(undefined8 param_1)

{
  FUN_00102b76(param_1);
  return;
}




void FUN_00104107(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001022c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c37(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




undefined8 FUN_00104266(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102a62(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010271f(local_38);
    cVar1 = FUN_00101de8(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020fb(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102111(local_38);
    }
  }
  FUN_0010285c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101d5c(undefined8 param_1)

{
  FUN_001021b6(param_1);
  return;
}




void FUN_0010341a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103667(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033b7(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103c62(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001040a4(void)

{
  return;
}




void FUN_00102d74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001033b7(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102376(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102cda(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a4c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d56(local_50);
    cVar2 = FUN_00101de8(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d56(local_50);
      cVar2 = FUN_00101de8(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103008(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d40(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d40(local_60);
          local_48[1] = 0;
          FUN_00102d74(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fdc(local_48);
          uVar6 = FUN_00102d56(*puVar5);
          cVar2 = FUN_00101de8(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102db4(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020fb(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d74(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f68(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f52(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f52(local_60);
        uVar6 = FUN_00102f52(local_60);
        FUN_00102f68(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102fb0(local_48);
        uVar6 = FUN_00102d56(*puVar5);
        cVar2 = FUN_00101de8(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102db4(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020fb(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d74(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f68(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102704;
  }
  lVar3 = FUN_00102d2a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102418:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d40(local_60);
    uVar6 = FUN_00102d56(*puVar5);
    cVar2 = FUN_00101de8(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102418;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d40(local_60);
    local_48[1] = 0;
    FUN_00102d74(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102db4(local_60,param_3);
  }
LAB_00102704:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103048(long param_1)

{
  FUN_00103462(param_1 + 0x20);
  return;
}




void FUN_00102128(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ce(param_1,param_2);
  FUN_00102a12(param_1,param_2);
  return;
}




long FUN_00102d40(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101a5c(undefined8 param_1)

{
  FUN_00101ca2(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00101dc6(undefined8 *param_1)

{
  FUN_00102214(*param_1);
  return;
}




void FUN_001032c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103524(param_1,param_2,param_3);
  return;
}




void FUN_00103265(undefined8 param_1)

{
  FUN_001018de(param_1);
  return;
}




void FUN_00102b20(undefined8 param_1)

{
  FUN_001032f2(param_1);
  return;
}




void FUN_00103a21(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_00101aba(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103b36(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b94(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d12(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00104083(void)

{
  return;
}




void FUN_00102d56(undefined8 param_1)

{
  FUN_0010271f(param_1);
  return;
}




void FUN_001037d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101888(0x30,param_2);
  uVar1 = FUN_0010372f(param_3);
  uVar2 = FUN_00102214(param_2);
  uVar3 = FUN_00103284(param_1);
  FUN_0010385e(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103510(void)

{
  return;
}




void FUN_00102908(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101936(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010359c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022c0(param_3);
  uVar1 = FUN_001022d2(param_4);
  FUN_00101e22(local_38,uVar1);
  FUN_001022e4(param_5);
  uVar1 = FUN_00101888(0x10,param_2);
                    /* try { // try from 00103624 to 00103628 has its CatchHandler @ 0010362b */
  FUN_001036de(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102236(undefined8 param_1)

{
  return param_1;
}




void FUN_001043e0(void)

{
  return;
}




undefined8 * FUN_00102fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001033b7(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001022f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bd0(param_1);
  uVar2 = FUN_001022e4(param_4);
  uVar3 = FUN_001022d2(param_3);
  uVar4 = FUN_001022c0(param_2);
  FUN_00102bfc(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_0010372f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103247(undefined8 param_1)

{
  FUN_001018b1(param_1);
  return;
}




undefined8 FUN_001034e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_0010205c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d1c(param_1);
  FUN_00101cb2(param_1,uVar1);
  FUN_00101976(param_1);
  return;
}




void FUN_001028ca(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ae(param_1,param_2);
  return;
}




void FUN_0010378e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103840(param_2);
  puVar2 = (undefined4 *)FUN_00102b94(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00102926(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a4c(param_1);
  uVar2 = FUN_001030c2(param_2);
  uVar1 = FUN_001030d8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f52(param_1);
  uVar2 = FUN_00103247(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d40(param_1);
  uVar2 = FUN_00103265(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102166(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a4c(param_1);
  uVar2 = FUN_00101d1c(param_1);
  FUN_00102a62(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010271f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103048(param_1);
  FUN_0010306a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c0c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101529(void)

{
  void *__s;
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019b6(local_88);
                    /* try { // try from 00101564 to 00101627 has its CatchHandler @ 00101673 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  lVar1 = (long)__s + -8;
  local_58[0] = 0;
  plVar2 = (long *)FUN_00101aba(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 1;
  plVar2 = (long *)FUN_00101aba(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 2;
  plVar2 = (long *)FUN_00101aba(local_88,local_58);
  *plVar2 = lVar1;
  FUN_001019f6(local_58,local_88);
                    /* try { // try from 0010162f to 00101633 has its CatchHandler @ 0010165e */
  FUN_0010390c(local_58);
  FUN_001019d6(local_58);
  FUN_001019d6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019d6(undefined8 param_1)

{
  FUN_00101a7c(param_1);
  return;
}




undefined8 FUN_001032f2(undefined8 param_1)

{
  return param_1;
}




int FUN_00104027(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined4 * FUN_00103480(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103048(param_2);
  puVar2 = (undefined4 *)FUN_0010368c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101c72(undefined8 param_1)

{
  FUN_001020ec(param_1);
  return;
}




void FUN_00104099(void)

{
  return;
}




void FUN_00103524(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103840(undefined8 param_1)

{
  FUN_0010389b(param_1);
  return;
}




void FUN_00101d32(undefined8 param_1,undefined8 param_2)

{
  FUN_00102166(param_1,param_2);
  return;
}




undefined8 FUN_001022d2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104370(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104062(void)

{
  return;
}




undefined8 FUN_00103304(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_0010306a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00102f52(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103b36(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b76(param_2);
  uVar1 = FUN_00102b94(uVar1);
  FUN_00102ba6(param_1,uVar1);
  return;
}




void FUN_00103008(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033b7(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_0010287a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103080(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104321(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102214(long param_1)

{
  FUN_00102b20(param_1 + 0x20);
  return;
}




void FUN_00101cb2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020fb(local_28);
    FUN_00101cb2(param_1,uVar1);
    lVar2 = FUN_00102111(local_28);
    FUN_00102128(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010408e(void)

{
  return;
}




void FUN_001040f1(void)

{
  return;
}




void FUN_00102bd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103284(param_1);
  FUN_00103319(uVar1,1);
  return;
}




undefined8 FUN_001033ca(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010285c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_00102fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_001030d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103480(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034e4(param_2);
                    /* try { // try from 00103147 to 001031d9 has its CatchHandler @ 00103205 */
    uVar2 = FUN_001030d8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034fa(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103480(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034e4(local_38);
      uVar2 = FUN_001030d8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034fa(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001019b6(undefined8 param_1)

{
  FUN_00101996(param_1);
  return;
}




void FUN_0010404c(void)

{
  return;
}




undefined8 FUN_001034fa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001030c2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00102072(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00102206(void)

{
  return;
}




void FUN_00102b3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102236(param_2);
  FUN_00102ba6(param_1,uVar1);
  return;
}




void FUN_00104041(void)

{
  return;
}




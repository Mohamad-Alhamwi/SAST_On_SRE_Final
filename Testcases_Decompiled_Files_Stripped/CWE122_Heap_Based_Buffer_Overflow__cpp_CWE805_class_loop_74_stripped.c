
void FUN_001023d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c46(param_2);
  FUN_00102438(param_1,uVar1);
  return;
}




void FUN_0010403d(void)

{
  return;
}




void FUN_001040a0(void)

{
  return;
}




void FUN_00102606(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a94(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103168(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103192(param_1);
  return;
}




void FUN_00103bdb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102912(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001025e8(undefined8 param_1)

{
  FUN_0010212f(param_1);
  return;
}




void FUN_001018e6(undefined8 param_1)

{
  FUN_00101bc6(param_1);
  return;
}




undefined8 FUN_00101cd0(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103ece(long param_1,ulong param_2,long param_3)

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




void FUN_001042e4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101999(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ce6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c46(param_2);
  FUN_001023d0(param_1,uVar1);
  return;
}




undefined8 FUN_00101c46(undefined8 param_1)

{
  return param_1;
}




int FUN_00103fcb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103d09(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00103fbc(void)

{
  return 0;
}




void FUN_00104011(void)

{
  return;
}




void FUN_00104310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001036f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101b76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022de(param_1);
  uVar2 = FUN_001022c8(param_1);
  FUN_001022f4(param_1,uVar2,uVar1,param_2);
  return;
}




long FUN_001034d2(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104048(void)

{
  return;
}




undefined8 FUN_00101cf4(undefined8 param_1)

{
  return param_1;
}




bool FUN_001041af(pthread_t *param_1)

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




void FUN_00103cb6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00102842(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103fad(void)

{
  return 1;
}




undefined8 FUN_001029ce(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101529(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_354;
  ulong local_350;
  ulong local_348;
  undefined4 *local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_354 = 2;
  puVar1 = (undefined8 *)FUN_00101790(param_1,&local_354);
  local_340 = (undefined4 *)*puVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_340 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_00103b32(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102646(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001022c8(param_1);
  local_50 = FUN_001022de(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010212f(local_58);
    local_59 = FUN_00101972(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010286e(local_58);
    }
    else {
      local_58 = FUN_001029a6(local_58);
    }
  }
  FUN_001022aa(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102aa6(param_1);
    cVar1 = FUN_00101904(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102af6(local_38,&local_58,&local_50);
      goto LAB_001027c8;
    }
    FUN_00102842(&local_48);
  }
  uVar2 = FUN_001025e8(local_48);
  cVar1 = FUN_00101972(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001028b0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102af6(local_38,&local_58,&local_50);
  }
LAB_001027c8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103a4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010397e(param_3);
  FUN_00103a88(param_1,param_2,uVar1);
  return;
}




void FUN_00102b5c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cf8(param_1,param_2);
  return;
}




long FUN_00103708(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038b4(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103918(param_2);
                    /* try { // try from 00103777 to 00103809 has its CatchHandler @ 00103835 */
    uVar2 = FUN_00103708(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010392e(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038b4(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103918(local_38);
      uVar2 = FUN_00103708(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010392e(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00101c16(void)

{
  return;
}




void FUN_00102dff(undefined8 param_1)

{
  FUN_00102408(param_1);
  return;
}




void FUN_00103b5a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001031d2(undefined8 param_1)

{
  FUN_001032b8(param_1);
  return;
}




void FUN_00104053(void)

{
  return;
}




undefined8 FUN_00102a94(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b00(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c24(param_2);
  uVar2 = FUN_001029e4(param_1);
  FUN_00102b5c(uVar2,uVar1);
  return;
}




undefined8
FUN_00102182(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022de(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025e8(param_3);
      uVar5 = FUN_0010212f(param_4);
      cVar1 = FUN_00101972(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102206;
      }
    }
  }
  bVar2 = true;
LAB_00102206:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001022aa(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00104074(void)

{
  return;
}




undefined8 FUN_0010256c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022aa(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031f2(undefined8 param_1)

{
  FUN_0010327c(param_1);
  return;
}




undefined8 FUN_001025bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00102d34(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001027fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a94(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a94(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104069(void)

{
  return;
}




undefined8 FUN_00101bc6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022aa(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c24(long param_1)

{
  FUN_001023b2(param_1 + 0x20);
  return;
}




undefined8 FUN_001022f4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010212f(local_38);
    cVar1 = FUN_00101972(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010286e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001029a6(local_38);
    }
  }
  FUN_001022aa(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001035d6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102408(undefined8 param_1)

{
  FUN_001029ce(param_1);
  return;
}




undefined8 FUN_00102cd3(undefined8 param_1)

{
  return param_1;
}




void FUN_00101950(undefined8 *param_1)

{
  FUN_00101c24(*param_1);
  return;
}




undefined8 FUN_001034bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104032(void)

{
  return;
}




void FUN_00103d37(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010405e(void)

{
  return;
}




undefined4 FUN_00101972(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101648(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_354;
  ulong local_350;
  ulong local_348;
  undefined4 *local_340;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_354 = 2;
  puVar1 = (undefined8 *)FUN_00101790(param_1,&local_354);
  local_340 = (undefined4 *)*puVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_340 + local_348 * 2) = (&uStack_338)[local_348];
  }
  FUN_00103b32(*local_340);
  if (local_340 != (undefined4 *)0x0) {
    operator_delete__(local_340);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103316(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010344c(param_1,param_2);
  lVar1 = FUN_001034bc(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034d2(param_1);
                    /* try { // try from 00103371 to 00103375 has its CatchHandler @ 0010337b */
    uVar3 = FUN_001034e8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001019ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c90(param_1,param_2);
  return;
}




long FUN_0010310e(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001028f0(long param_1)

{
  FUN_00102b3e(param_1 + 0x20);
  return;
}




void FUN_0010296c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029e4(param_1);
  FUN_00102b86(uVar1,param_2,1);
  return;
}




void FUN_00103b32(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010226c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102928(param_1,param_2);
  FUN_0010296c(param_1,param_2);
  return;
}




void FUN_001032b8(undefined8 param_1)

{
  FUN_001033d2(param_1);
  return;
}




void FUN_00103b86(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104380(void)

{
  return;
}




undefined8 FUN_001040e2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040ab,local_18);
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




long FUN_001027e4(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104006(void)

{
  return;
}




void FUN_00103ada(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101904(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001035ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102e1d(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103212(local_88);
                    /* try { // try from 00102e58 to 00102ee2 has its CatchHandler @ 00102f2e */
  pvVar1 = operator_new__(400);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103252(local_58,local_88);
                    /* try { // try from 00102eea to 00102eee has its CatchHandler @ 00102f19 */
  FUN_00101529(local_58);
  FUN_00103232(local_58);
  FUN_00103232(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101c90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102408(param_2);
  uVar1 = FUN_00102426(uVar1);
  FUN_00102438(param_1,uVar1);
  return;
}




undefined8 FUN_00101767(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103212(undefined8 param_1)

{
  FUN_001031f2(param_1);
  return;
}




undefined8 FUN_00101d06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102462(param_1);
  uVar2 = FUN_00101cf4(param_4);
  uVar3 = FUN_00101ce2(param_3);
  uVar4 = FUN_00101cd0(param_2);
  FUN_0010248e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104027(void)

{
  return;
}




undefined8 FUN_0010286e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c46(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_001022de(long param_1)

{
  return param_1 + 8;
}




void FUN_00102de1(undefined8 param_1)

{
  FUN_00102dff(param_1);
  return;
}




void FUN_00103cde(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102af6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102cd3(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a94(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103ff0(void)

{
  return;
}




void FUN_00101a0e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001018bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b76(param_1,param_2);
  return;
}




void FUN_00102f5b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103212(local_88);
                    /* try { // try from 00102f96 to 00103020 has its CatchHandler @ 0010306c */
  pvVar1 = operator_new__(800);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101790(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00103252(local_58,local_88);
                    /* try { // try from 00103028 to 0010302c has its CatchHandler @ 00103057 */
  FUN_00101648(local_58);
  FUN_00103232(local_58);
  FUN_00103232(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010248e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101767(0x30,param_2);
  uVar1 = FUN_00101cf4(param_5);
  uVar2 = FUN_00101ce2(param_4);
  uVar3 = FUN_00101cd0(param_3);
  uVar4 = FUN_00101c24(param_2);
  uVar5 = FUN_001029e4(param_1);
                    /* try { // try from 0010251d to 00102521 has its CatchHandler @ 00102524 */
  FUN_00102a24(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 * FUN_001038b4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028f0(param_2);
  puVar2 = (undefined4 *)FUN_00103944(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103ffb(void)

{
  return;
}




void FUN_001042c5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010327c(long param_1)

{
  FUN_001033a2(param_1);
  FUN_001033c2(param_1);
  FUN_00103168(param_1 + 8);
  return;
}




void FUN_00102bb8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d34(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001033e2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010286e(local_28);
    FUN_001033e2(param_1,uVar1);
    lVar2 = FUN_001029a6(local_28);
    FUN_0010226c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001029a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103232(undefined8 param_1)

{
  FUN_001032d8(param_1);
  return;
}




void FUN_001022aa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 FUN_001019d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c46(param_2);
  FUN_00101c58(param_1,uVar1);
  return param_1;
}




long FUN_001025d2(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103608(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022de(param_1);
  uVar2 = FUN_001036f2(param_2);
  uVar1 = FUN_00103708(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027e4(param_1);
  uVar2 = FUN_00103877(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001025d2(param_1);
  uVar2 = FUN_00103895(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001035ac(undefined8 param_1,undefined8 param_2)

{
  FUN_001036de(param_1,param_2);
  return;
}




void FUN_00103099(void)

{
  FUN_00102f5b();
  return;
}




void FUN_00103d6a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_0010313b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_0010401c(void)

{
  return;
}




undefined8 FUN_0010420a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103252(undefined8 param_1,undefined8 param_2)

{
  FUN_00103316(param_1,param_2);
  return;
}




void FUN_00103c31(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103990(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102462(param_1);
  uVar2 = FUN_0010397e(param_2);
  FUN_001039dc(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102d4c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d9e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ce2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010397e(param_3);
  puVar3 = (undefined8 *)FUN_00101767(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cf4(param_5);
  uVar2 = FUN_00101ce2(param_4);
  uVar3 = FUN_00101cd0(param_3);
  FUN_00102c08(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001033a2(undefined8 param_1)

{
  FUN_0010354c(param_1);
  return;
}




void FUN_00103877(undefined8 param_1)

{
  FUN_0010310e(param_1);
  return;
}




void FUN_00102b86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d0c(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103bb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010355b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036b0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103944(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010397e(param_2);
  FUN_00103990(uVar1,uVar2);
  return;
}




undefined8 * FUN_00102884(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001022c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102d0c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c06(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d9e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102de1(param_2);
  puVar2 = (undefined4 *)FUN_00102426(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001029bc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cd0(param_3);
  uVar1 = FUN_00101ce2(param_4);
  FUN_001019ac(local_38,uVar1);
  FUN_00101cf4(param_5);
  uVar1 = FUN_00101767(0x10,param_2);
                    /* try { // try from 00102c90 to 00102c94 has its CatchHandler @ 00102c97 */
  FUN_00102d4c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




undefined8
FUN_00101a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cf4(param_5);
  uVar2 = FUN_00101ce2(param_4);
  uVar3 = FUN_00101cd0(param_3);
  local_40 = FUN_00101d06(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101aac to 00101aef has its CatchHandler @ 00101b2d */
  uVar1 = FUN_0010212f(local_40);
  local_38 = FUN_00101d86(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010226c(param_1,local_40);
    FUN_001022aa(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102182(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103fe5(void)

{
  return;
}




void FUN_0010212f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028f0(param_1);
  FUN_00102912(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001036b0(undefined8 param_1,undefined8 param_2)

{
  FUN_001035ac(param_1,param_2);
  return param_1;
}




void FUN_0010407f(void)

{
  return;
}




undefined8 FUN_0010392e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001023b2(undefined8 param_1)

{
  FUN_001029bc(param_1);
  return;
}




void FUN_001042a6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001039dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101767(0x30,param_2);
  uVar1 = FUN_0010397e(param_3);
  uVar2 = FUN_00101c24(param_2);
  uVar3 = FUN_001029e4(param_1);
  FUN_00103a4a(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103c5c(undefined4 param_1)

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




void FUN_00102462(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029e4(param_1);
  FUN_001029f6(uVar1,1);
  return;
}




void FUN_0010177d(void)

{
  return;
}




void FUN_00102b3e(undefined8 param_1)

{
  FUN_00102ce6(param_1);
  return;
}




void FUN_001040ab(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001036de(void)

{
  return;
}




void FUN_0010344c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010355b(param_1,param_2);
  FUN_001035d6(param_1,param_2);
  FUN_00103168(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c8(param_1);
  FUN_001033e2(param_1,uVar1);
  FUN_001031d2(param_1);
  return;
}




ulong FUN_00103dca(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102aa6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022aa(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001033d2(void)

{
  return;
}




void FUN_00102cf8(void)

{
  return;
}




void FUN_001029f6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb8(param_1,param_2,0);
  return;
}




undefined8 FUN_00102426(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010422d(undefined8 *param_1)

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




void FUN_00103192(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103895(undefined8 param_1)

{
  FUN_0010313b(param_1);
  return;
}




void FUN_001033c2(void)

{
  return;
}




void FUN_0010354c(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_0010256c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022de(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025e8(local_50);
    cVar2 = FUN_00101972(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025e8(local_50);
      cVar2 = FUN_00101972(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001028b0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001025d2(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001025d2(local_60);
          local_48[1] = 0;
          FUN_00102606(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102884(local_48);
          uVar6 = FUN_001025e8(*puVar5);
          cVar2 = FUN_00101972(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102646(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010286e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102606(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027fa(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027e4(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027e4(local_60);
        uVar6 = FUN_001027e4(local_60);
        FUN_001027fa(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102842(local_48);
        uVar6 = FUN_001025e8(*puVar5);
        cVar2 = FUN_00101972(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102646(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010286e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102606(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027fa(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102114;
  }
  lVar3 = FUN_001025bc(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e28:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001025d2(local_60);
    uVar6 = FUN_001025e8(*puVar5);
    cVar2 = FUN_00101972(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e28;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001025d2(local_60);
    local_48[1] = 0;
    FUN_00102606(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102646(local_60,param_3);
  }
LAB_00102114:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104095(void)

{
  return;
}




undefined8 FUN_0010397e(undefined8 param_1)

{
  return param_1;
}




void FUN_001034e8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035ea(local_18,param_1);
  FUN_00103608(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a94(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00101790(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018bc(param_1,param_2);
  local_28 = FUN_001018e6(param_1);
  cVar2 = FUN_00101904(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010192a(param_1);
    uVar3 = FUN_00101950(&local_38);
    cVar2 = FUN_00101972(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101830;
    }
  }
  bVar1 = true;
LAB_00101830:
  if (bVar1) {
    uVar3 = FUN_00101999(param_2);
    FUN_001019d6(local_30,uVar3);
    FUN_00101a0e(&local_28,&local_38);
    local_38 = FUN_00101a30(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101950(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_001029e4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001030a9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ada("Calling good()...");
  FUN_00103099();
  FUN_00103ada("Finished good()");
  FUN_00103ada("Calling bad()...");
  FUN_00102e1d();
  FUN_00103ada("Finished bad()");
  return 0;
}




void FUN_0010408a(void)

{
  return;
}




undefined4 FUN_0010192a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101c16(param_1);
  return unaff_EBX;
}




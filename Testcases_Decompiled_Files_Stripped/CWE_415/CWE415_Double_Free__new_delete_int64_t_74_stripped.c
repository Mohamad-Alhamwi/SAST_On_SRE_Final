
void FUN_001026ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102968(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102968(param_3);
  param_1[1] = *puVar1;
  return;
}




bool FUN_001041f9(pthread_t *param_1)

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




undefined8 FUN_00102890(undefined8 param_1)

{
  return param_1;
}




void FUN_0010340c(void)

{
  return;
}




undefined8 FUN_00104006(void)

{
  return 0;
}




void FUN_00102a30(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bcc(param_1,param_2);
  return;
}




undefined8 FUN_0010287a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101af8(long param_1)

{
  FUN_00102286(param_1 + 0x20);
  return;
}




void FUN_001022a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b1a(param_2);
  FUN_0010230c(param_1,uVar1);
  return;
}




void FUN_00104087(void)

{
  return;
}




undefined8 FUN_00101bb6(undefined8 param_1)

{
  return param_1;
}




long FUN_00103157(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001021c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102003(local_38);
    cVar1 = FUN_00101846(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102742(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010287a(local_38);
    }
  }
  FUN_0010217e(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001021b2(long param_1)

{
  return param_1 + 8;
}




void FUN_001040a8(void)

{
  return;
}




void FUN_0010405b(void)

{
  return;
}




void FUN_0010409d(void)

{
  return;
}




void FUN_001040df(void)

{
  return;
}




void FUN_00103ad2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039c8(param_3);
  puVar3 = (undefined8 *)FUN_0010163a(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8
FUN_00102056(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001021b2(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024bc(param_3);
      uVar5 = FUN_00102003(param_4);
      cVar1 = FUN_00101846(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020da;
      }
    }
  }
  bVar2 = true;
LAB_001020da:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010217e(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001038c1(undefined8 param_1)

{
  FUN_00103157(param_1);
  return;
}




undefined8 FUN_00104254(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001022fa(undefined8 param_1)

{
  return param_1;
}




void FUN_00104045(void)

{
  return;
}




void FUN_001028f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101bc8(param_5);
  uVar2 = FUN_00101bb6(param_4);
  uVar3 = FUN_00101ba4(param_3);
  FUN_00102adc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104092(void)

{
  return;
}




undefined8 FUN_00102bba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001018aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b1a(param_2);
  FUN_00101b2c(param_1,uVar1);
  return param_1;
}




undefined8 FUN_001028a2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101824(undefined8 *param_1)

{
  FUN_00101af8(*param_1);
  return;
}




void FUN_00103d00(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001017ba(undefined8 param_1)

{
  FUN_00101a9a(param_1);
  return;
}




void FUN_00102cf1(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010325c(local_88);
                    /* try { // try from 00102d2c to 00102dcf has its CatchHandler @ 00102e1b */
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_0010329c(local_58,local_88);
                    /* try { // try from 00102dd7 to 00102ddb has its CatchHandler @ 00102e06 */
  FUN_00101509(local_58);
  FUN_0010327c(local_58);
  FUN_0010327c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b24(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010217e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010327c(undefined8 param_1)

{
  FUN_00103322(param_1);
  return;
}




ulong FUN_00103e14(long param_1,ulong param_2,long param_3)

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




void FUN_0010342c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102742(local_28);
    FUN_0010342c(param_1,uVar1);
    lVar2 = FUN_0010287a(local_28);
    FUN_00102140(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00104277(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00102c20(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c72(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d81(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102a5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102be0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102440(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010432e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001027e6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103496(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035a5(param_1,param_2);
  FUN_00103620(param_1,param_2);
  FUN_001031b2(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101af8(param_2);
  uVar2 = FUN_001028b8(param_1);
  FUN_00102a30(uVar2,uVar1);
  return;
}




void FUN_001031dc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001028ca(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a8c(param_1,param_2,0);
  return;
}




void FUN_0010430f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102140(undefined8 param_1,undefined8 param_2)

{
  FUN_001027fc(param_1,param_2);
  FUN_00102840(param_1,param_2);
  return;
}




undefined8 FUN_0010219c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010251a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_0010219c(param_1);
  local_50 = FUN_001021b2(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102003(local_58);
    local_59 = FUN_00101846(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102742(local_58);
    }
    else {
      local_58 = FUN_0010287a(local_58);
    }
  }
  FUN_0010217e(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010297a(param_1);
    cVar1 = FUN_001017d8(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029ca(local_38,&local_58,&local_50);
      goto LAB_0010269c;
    }
    FUN_00102716(&local_48);
  }
  uVar2 = FUN_001024bc(local_48);
  cVar1 = FUN_00101846(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102784(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029ca(local_38,&local_58,&local_50);
  }
LAB_0010269c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010398e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039c8(param_2);
  FUN_001039da(uVar1,uVar2);
  return;
}




undefined4 FUN_001017fe(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101aea(param_1);
  return unaff_EBX;
}




undefined8 * FUN_00102716(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001030f2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b24("Calling good()...");
  FUN_001030dd();
  FUN_00103b24("Finished good()");
  FUN_00103b24("Calling bad()...");
  FUN_00102cf1();
  FUN_00103b24("Finished bad()");
  return 0;
}




void FUN_00101b64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022dc(param_2);
  uVar1 = FUN_001022fa(uVar1);
  FUN_0010230c(param_1,uVar1);
  return;
}




long FUN_00103752(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038fe(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103962(param_2);
                    /* try { // try from 001037c1 to 00103853 has its CatchHandler @ 0010387f */
    uVar2 = FUN_00103752(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103978(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038fe(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103962(local_38);
      uVar2 = FUN_00103752(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103978(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_0010412c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040f5,local_18);
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




void FUN_00104066(void)

{
  return;
}




void FUN_001042f0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101ba4(undefined8 param_1)

{
  return param_1;
}




void FUN_001018e2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103620(void)

{
  return;
}




undefined8 FUN_00101bc8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103360(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103496(param_1,param_2);
  lVar1 = FUN_00103506(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010351c(param_1);
                    /* try { // try from 001033bb to 001033bf has its CatchHandler @ 001033c5 */
    uVar3 = FUN_00103532(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102a12(undefined8 param_1)

{
  FUN_00102bba(param_1);
  return;
}




void FUN_00102a8c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c08(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103db4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010163a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_001035a5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036fa(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103f18(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001017d8(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001028b8(undefined8 param_1)

{
  return param_1;
}




void FUN_001040d4(void)

{
  return;
}




void FUN_00103d53(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101b1a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001039c8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010329c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103360(param_1,param_2);
  return;
}




void FUN_00103bd0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102286(undefined8 param_1)

{
  FUN_00102890(param_1);
  return;
}




undefined8
FUN_00101904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101bc8(param_5);
  uVar2 = FUN_00101bb6(param_4);
  uVar3 = FUN_00101ba4(param_3);
  local_40 = FUN_00101bda(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101980 to 001019c3 has its CatchHandler @ 00101a01 */
  uVar1 = FUN_00102003(local_40);
  local_38 = FUN_00101c5a(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102140(param_1,local_40);
    FUN_0010217e(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102056(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00103506(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010230c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b1a(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001040f5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102968(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_00102758(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001024da(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102968(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010325c(undefined8 param_1)

{
  FUN_0010323c(param_1);
  return;
}




void FUN_00104050(void)

{
  return;
}




void FUN_00102cb5(undefined8 param_1)

{
  FUN_00102cd3(param_1);
  return;
}




void FUN_001040be(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102440(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001021b2(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024bc(local_50);
    cVar2 = FUN_00101846(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024bc(local_50);
      cVar2 = FUN_00101846(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102784(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001024a6(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001024a6(local_60);
          local_48[1] = 0;
          FUN_001024da(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102758(local_48);
          uVar6 = FUN_001024bc(*puVar5);
          cVar2 = FUN_00101846(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010251a(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102742(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024da(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026ce(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026b8(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026b8(local_60);
        uVar6 = FUN_001026b8(local_60);
        FUN_001026ce(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102716(local_48);
        uVar6 = FUN_001024bc(*puVar5);
        cVar2 = FUN_00101846(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010251a(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102742(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024da(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026ce(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fe8;
  }
  lVar3 = FUN_00102490(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101cfc:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001024a6(local_60);
    uVar6 = FUN_001024bc(*puVar5);
    cVar2 = FUN_00101846(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101cfc;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001024a6(local_60);
    local_48[1] = 0;
    FUN_001024da(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010251a(local_60,param_3);
  }
LAB_00101fe8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00101aea(void)

{
  return;
}




void FUN_001032c6(long param_1)

{
  FUN_001033ec(param_1);
  FUN_0010340c(param_1);
  FUN_001031b2(param_1 + 8);
  return;
}




void FUN_001027c4(long param_1)

{
  FUN_00102a12(param_1 + 0x20);
  return;
}




void FUN_00103ba4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001040c9(void)

{
  return;
}




void FUN_00103596(void)

{
  return;
}




void FUN_00102f86(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010325c(local_88);
                    /* try { // try from 00102fc1 to 00103064 has its CatchHandler @ 001030b0 */
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_0010329c(local_58,local_88);
                    /* try { // try from 0010306c to 00103070 has its CatchHandler @ 0010309b */
  FUN_001015e3(local_58);
  FUN_0010327c(local_58);
  FUN_0010327c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103728(void)

{
  return;
}




void FUN_00102adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ba4(param_3);
  uVar1 = FUN_00101bb6(param_4);
  FUN_00101880(local_38,uVar1);
  FUN_00101bc8(param_5);
  uVar1 = FUN_0010163a(0x10,param_2);
                    /* try { // try from 00102b64 to 00102b68 has its CatchHandler @ 00102b6b */
  FUN_00102c20(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010351c(long param_1)

{
  return param_1 + 0x10;
}




long FUN_001024a6(long param_1)

{
  return param_1 + 0x20;
}




undefined4 FUN_00101846(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_00101bda(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102336(param_1);
  uVar2 = FUN_00101bc8(param_4);
  uVar3 = FUN_00101bb6(param_3);
  uVar4 = FUN_00101ba4(param_2);
  FUN_00102362(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028b8(param_1);
  FUN_00102a5a(uVar1,param_2,1);
  return;
}




undefined8 FUN_001039da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102336(param_1);
  uVar2 = FUN_001039c8(param_2);
  FUN_00103a26(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00103978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103302(undefined8 param_1)

{
  FUN_0010341c(param_1);
  return;
}




void FUN_00104071(void)

{
  return;
}




void FUN_001033ec(undefined8 param_1)

{
  FUN_00103596(param_1);
  return;
}




void FUN_001040ea(void)

{
  return;
}




void FUN_00103532(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103634(local_18,param_1);
  FUN_00103652(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010402f(void)

{
  return;
}




void FUN_00103c7b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010321c(undefined8 param_1)

{
  FUN_00103302(param_1);
  return;
}




void FUN_001022dc(undefined8 param_1)

{
  FUN_001028a2(param_1);
  return;
}




void FUN_00103d28(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101790(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a4a(param_1,param_2);
  return;
}




undefined8 FUN_00102c08(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103634(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b4a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102e48(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010325c(local_88);
                    /* try { // try from 00102e83 to 00102f0d has its CatchHandler @ 00102f59 */
  pvVar1 = operator_new(8);
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101664(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_0010329c(local_58,local_88);
                    /* try { // try from 00102f15 to 00102f19 has its CatchHandler @ 00102f44 */
  FUN_00101576(local_58);
  FUN_0010327c(local_58);
  FUN_0010327c(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101664(param_1,&local_1c);
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




undefined8 FUN_0010186d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103ff7(void)

{
  return 1;
}




undefined8 FUN_00103962(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103c25(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010297a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217e(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024bc(undefined8 param_1)

{
  FUN_00102003(param_1);
  return;
}




void FUN_001031b2(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031dc(param_1);
  return;
}




int FUN_00104015(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101576(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101664(param_1,&local_1c);
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




void FUN_0010323c(undefined8 param_1)

{
  FUN_001032c6(param_1);
  return;
}




undefined8 FUN_00102ba7(undefined8 param_1)

{
  return param_1;
}




void FUN_001030dd(void)

{
  FUN_00102e48();
  FUN_00102f86();
  return;
}




void FUN_00101880(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b64(param_1,param_2);
  return;
}




void FUN_00102003(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027c4(param_1);
  FUN_001027e6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040b3(void)

{
  return;
}




long FUN_00101664(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101790(param_1,param_2);
  local_28 = FUN_001017ba(param_1);
  cVar2 = FUN_001017d8(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017fe(param_1);
    uVar3 = FUN_00101824(&local_38);
    cVar2 = FUN_00101846(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101704;
    }
  }
  bVar1 = true;
LAB_00101704:
  if (bVar1) {
    uVar3 = FUN_0010186d(param_2);
    FUN_001018aa(local_30,uVar3);
    FUN_001018e2(&local_28,&local_38);
    local_38 = FUN_00101904(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101824(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102362(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010163a(0x30,param_2);
  uVar1 = FUN_00101bc8(param_5);
  uVar2 = FUN_00101bb6(param_4);
  uVar3 = FUN_00101ba4(param_3);
  uVar4 = FUN_00101af8(param_2);
  uVar5 = FUN_001028b8(param_1);
                    /* try { // try from 001023f1 to 001023f5 has its CatchHandler @ 001023f8 */
  FUN_001028f8(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103a26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010163a(0x30,param_2);
  uVar1 = FUN_001039c8(param_3);
  uVar2 = FUN_00101af8(param_2);
  uVar3 = FUN_001028b8(param_1);
  FUN_00103a94(uVar3,uVar2,uVar1);
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




void FUN_00103bfa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_001026b8(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103ca6(undefined4 param_1)

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




void FUN_001015e3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101664(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010403a(void)

{
  return;
}




void FUN_00102784(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102968(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101a4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021b2(param_1);
  uVar2 = FUN_0010219c(param_1);
  FUN_001021c8(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102cd3(undefined8 param_1)

{
  FUN_001022dc(param_1);
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




void FUN_00103a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039c8(param_3);
  FUN_00103ad2(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_0010373c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001035f6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103728(param_1,param_2);
  return;
}




void FUN_0010407c(void)

{
  return;
}




void FUN_00102c72(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102cb5(param_2);
  puVar2 = (undefined4 *)FUN_001022fa(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_001036fa(undefined8 param_1,undefined8 param_2)

{
  FUN_001035f6(param_1,param_2);
  return param_1;
}




long FUN_00103184(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00102be0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102742(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010341c(void)

{
  return;
}




void FUN_00103b7c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103652(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001021b2(param_1);
  uVar2 = FUN_0010373c(param_2);
  uVar1 = FUN_00103752(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026b8(param_1);
  uVar2 = FUN_001038c1(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001024a6(param_1);
  uVar2 = FUN_001038df(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined4 * FUN_001038fe(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027c4(param_2);
  puVar2 = (undefined4 *)FUN_0010398e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102336(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028b8(param_1);
  FUN_001028ca(uVar1,1);
  return;
}




void FUN_00103c50(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001038df(undefined8 param_1)

{
  FUN_00103184(param_1);
  return;
}




void FUN_001029ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102ba7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102968(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101a9a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010217e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bcc(void)

{
  return;
}




void FUN_00101650(void)

{
  return;
}




void FUN_00103322(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010219c(param_1);
  FUN_0010342c(param_1,uVar1);
  FUN_0010321c(param_1);
  return;
}




void FUN_001043d0(void)

{
  return;
}




void FUN_00101b2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b1a(param_2);
  FUN_001022a4(param_1,uVar1);
  return;
}




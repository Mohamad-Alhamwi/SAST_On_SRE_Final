
void FUN_00103534(undefined8 param_1,undefined8 param_2)

{
  FUN_001035f8(param_1,param_2);
  return;
}




void FUN_0010372e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010383d(param_1,param_2);
  FUN_001038b8(param_1,param_2);
  FUN_0010344a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102568(param_1);
  uVar2 = FUN_00101dfa(param_4);
  uVar3 = FUN_00101de8(param_3);
  uVar4 = FUN_00101dd6(param_2);
  FUN_00102594(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102dd9(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_001030b4(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f4(local_88);
  local_58[0] = 0;
                    /* try { // try from 00103108 to 0010316b has its CatchHandler @ 001031b7 */
  puVar1 = (undefined4 *)FUN_00101896(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101896(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101896(local_88,local_58);
  *puVar1 = 7;
  FUN_00103534(local_58,local_88);
                    /* try { // try from 00103173 to 00103177 has its CatchHandler @ 001031a2 */
  FUN_00101652(local_58);
  FUN_00103514(local_58);
  FUN_00103514(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001039d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001038cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101ab2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d96(param_1,param_2);
  return;
}




undefined8 FUN_00103c72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102568(param_1);
  uVar2 = FUN_00103c60(param_2);
  FUN_00103cbe(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_0010338b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103db1("Calling good()...");
  FUN_00103376();
  FUN_00103db1("Finished good()");
  FUN_00103db1("Calling bad()...");
  FUN_00102f22();
  FUN_00103db1("Finished bad()");
  return 0;
}




long FUN_001039ea(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103b96(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103bfa(param_2);
                    /* try { // try from 00103a59 to 00103aeb has its CatchHandler @ 00103b17 */
    uVar2 = FUN_001039ea(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103c10(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103b96(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103bfa(local_38);
      uVar2 = FUN_001039ea(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103c10(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102ea4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ee6(param_2);
  puVar2 = (undefined4 *)FUN_0010252c(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103376(void)

{
  FUN_001030b4();
  FUN_001031e4();
  return;
}




void FUN_001034b4(undefined8 param_1)

{
  FUN_0010359a(param_1);
  return;
}




undefined8 FUN_001038ea(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023e4(param_1);
  uVar2 = FUN_001039d4(param_2);
  uVar1 = FUN_001039ea(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028ea(param_1);
  uVar2 = FUN_00103b59(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001026d8(param_1);
  uVar2 = FUN_00103b77(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001029b6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b9a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_00103bfa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001026c2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010355e(long param_1)

{
  FUN_00103684(param_1);
  FUN_001036a4(param_1);
  FUN_0010344a(param_1 + 8);
  return;
}




void FUN_0010400e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103e87(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00104486(pthread_t *param_1)

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




void FUN_001039c0(void)

{
  return;
}




void FUN_001037ca(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001038cc(local_18,param_1);
  FUN_001038ea(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102e3a(void)

{
  return 0x333333333333333;
}




void FUN_001031e4(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined local_98 [48];
  undefined4 local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f4(local_98);
  local_9c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00103244 to 001032f7 has its CatchHandler @ 00103346 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103db1("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103534(local_68,local_98);
                    /* try { // try from 001032ff to 00103303 has its CatchHandler @ 00103331 */
  FUN_0010175b(local_68);
  FUN_00103514(local_68);
  FUN_00103514(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101549(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101896(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103db1("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e09(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b9a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104504(undefined8 *param_1)

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




undefined8 FUN_00101a0a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001029f6(long param_1)

{
  FUN_00102c44(param_1 + 0x20);
  return;
}




void FUN_00101d2a(long param_1)

{
  FUN_001024b8(param_1 + 0x20);
  return;
}




void FUN_00102c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e12(param_1,param_2,param_3);
  return;
}




void FUN_00102235(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029f6(param_1);
  FUN_00102a18(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001041a5(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010359a(undefined8 param_1)

{
  FUN_001036b4(param_1);
  return;
}




void FUN_00101883(void)

{
  return;
}




void FUN_00102c44(undefined8 param_1)

{
  FUN_00102dec(param_1);
  return;
}




void FUN_00103684(undefined8 param_1)

{
  FUN_0010382e(param_1);
  return;
}




undefined8
FUN_00102288(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001023e4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026ee(param_3);
      uVar5 = FUN_00102235(param_4);
      cVar1 = FUN_00101a78(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010230c;
      }
    }
  }
  bVar2 = true;
LAB_0010230c:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001023b0(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_00101b36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101dfa(param_5);
  uVar2 = FUN_00101de8(param_4);
  uVar3 = FUN_00101dd6(param_3);
  local_40 = FUN_00101e0c(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101bb2 to 00101bf5 has its CatchHandler @ 00101c33 */
  uVar1 = FUN_00102235(local_40);
  local_38 = FUN_00101e8c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102372(param_1,local_40);
    FUN_001023b0(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102288(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001035f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010372e(param_1,param_2);
  lVar1 = FUN_0010379e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001037b4(param_1);
                    /* try { // try from 00103653 to 00103657 has its CatchHandler @ 0010365d */
    uVar3 = FUN_001037ca(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104309(void)

{
  return;
}




long FUN_001028ea(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104660(void)

{
  return;
}




void FUN_001042c7(void)

{
  return;
}




undefined8 FUN_00101a9f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b77(undefined8 param_1)

{
  FUN_0010341d(param_1);
  return;
}




undefined8 FUN_00102672(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b0(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103514(undefined8 param_1)

{
  FUN_001035ba(param_1);
  return;
}




void FUN_00102ee6(undefined8 param_1)

{
  FUN_00102f04(param_1);
  return;
}




void FUN_001035ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ce(param_1);
  FUN_001036c4(param_1,uVar1);
  FUN_001034b4(param_1);
  return;
}




void FUN_001042bc(void)

{
  return;
}




void FUN_001024d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4c(param_2);
  FUN_0010253e(param_1,uVar1);
  return;
}




undefined8 FUN_00101de8(undefined8 param_1)

{
  return param_1;
}




void FUN_00104382(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103eb2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c60(param_3);
  FUN_00103d6a(param_1,param_2,uVar1);
  return;
}




void FUN_0010457d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001042d2(void)

{
  return;
}




void FUN_0010434b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00103c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c62(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dfe(param_1,param_2);
  return;
}




void FUN_001042fe(void)

{
  return;
}




undefined8 FUN_00103c60(undefined8 param_1)

{
  return param_1;
}




void FUN_0010459c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001023fa(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102235(local_38);
    cVar1 = FUN_00101a78(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102974(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102aac(local_38);
    }
  }
  FUN_001023b0(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102cbe(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102e3a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_00103992(undefined8 param_1,undefined8 param_2)

{
  FUN_0010388e(param_1,param_2);
  return param_1;
}




long FUN_001037b4(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103474(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102bfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102dd9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b9a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e31(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103e5d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104377(void)

{
  return;
}




void FUN_00102900(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b9a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b9a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101d4c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_001040a1(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001045bb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103fe0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102372(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a2e(param_1,param_2);
  FUN_00102a72(param_1,param_2);
  return;
}




void FUN_001034f4(undefined8 param_1)

{
  FUN_001034d4(param_1);
  return;
}




void FUN_00103e09(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d1c(void)

{
  return;
}




void FUN_00103fb5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102e52(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102ea4(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103b96(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029f6(param_2);
  puVar2 = (undefined4 *)FUN_00103c26(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001019c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c7c(param_1,param_2);
  return;
}




long FUN_0010341d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00104293(void)

{
  return 0;
}




void FUN_00103c26(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103c60(param_2);
  FUN_00103c72(uVar1,uVar2);
  return;
}




void FUN_00101d5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4c(param_2);
  FUN_001024d6(param_1,uVar1);
  return;
}




void FUN_00102a72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aea(param_1);
  FUN_00102c8c(uVar1,param_2,1);
  return;
}




void FUN_0010344a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103474(param_1);
  return;
}




void FUN_001038b8(void)

{
  return;
}




long FUN_001023e4(long param_1)

{
  return param_1 + 8;
}




void FUN_00101a56(undefined8 *param_1)

{
  FUN_00101d2a(*param_1);
  return;
}




void FUN_00102568(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aea(param_1);
  FUN_00102afc(uVar1,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_001023b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010432a(void)

{
  return;
}




void FUN_001042e8(void)

{
  return;
}




void FUN_001042f3(void)

{
  return;
}




undefined8 * FUN_00102948(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010274c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001023ce(param_1);
  local_50 = FUN_001023e4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102235(local_58);
    local_59 = FUN_00101a78(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102974(local_58);
    }
    else {
      local_58 = FUN_00102aac(local_58);
    }
  }
  FUN_001023b0(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102bac(param_1);
    cVar1 = FUN_00101a0a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bfc(local_38,&local_58,&local_50);
      goto LAB_001028ce;
    }
    FUN_00102948(&local_48);
  }
  uVar2 = FUN_001026ee(local_48);
  cVar1 = FUN_00101a78(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001029b6(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bfc(local_38,&local_58,&local_50);
  }
LAB_001028ce:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010436c(void)

{
  return;
}




void FUN_00101d96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010250e(param_2);
  uVar1 = FUN_0010252c(uVar1);
  FUN_0010253e(param_1,uVar1);
  return;
}




void FUN_00102f04(undefined8 param_1)

{
  FUN_0010250e(param_1);
  return;
}




undefined8 FUN_00101dfa(undefined8 param_1)

{
  return param_1;
}




void FUN_001034d4(undefined8 param_1)

{
  FUN_0010355e(param_1);
  return;
}




void FUN_0010382e(void)

{
  return;
}




void FUN_00104356(void)

{
  return;
}




undefined8 FUN_001023ce(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102dfe(void)

{
  return;
}




void FUN_00102afc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cbe(param_1,param_2,0);
  return;
}




int FUN_001042a2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023e4(param_1);
  uVar2 = FUN_001023ce(param_1);
  FUN_001023fa(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102bac(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b0(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010186d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103db1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010250e(undefined8 param_1)

{
  FUN_00102ad4(param_1);
  return;
}




undefined8 FUN_00102a18(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 FUN_00101a30(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101d1c(param_1);
  return unaff_EBX;
}




void FUN_00104314(void)

{
  return;
}




void FUN_0010431f(void)

{
  return;
}




void FUN_00102d0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd6(param_3);
  uVar1 = FUN_00101de8(param_4);
  FUN_00101ab2(local_38,uVar1);
  FUN_00101dfa(param_5);
  uVar1 = FUN_0010186d(8,param_2);
                    /* try { // try from 00102d96 to 00102d9a has its CatchHandler @ 00102d9d */
  FUN_00102e52(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010270c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b9a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104340(void)

{
  return;
}




undefined8 FUN_00102ad4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101b14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102dec(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f08(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101ccc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b0(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109028 = 1;
    return;
  }
  return;
}




undefined4 FUN_00101a78(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_001033f0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103dd7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f8d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001036a4(void)

{
  return;
}




undefined8 FUN_00102ac2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010388e(undefined8 param_1,undefined8 param_2)

{
  FUN_001039c0(param_1,param_2);
  return;
}




void FUN_00102b2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101dfa(param_5);
  uVar2 = FUN_00101de8(param_4);
  uVar3 = FUN_00101dd6(param_3);
  FUN_00102d0e(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102e12(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00104041(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001019ec(undefined8 param_1)

{
  FUN_00101ccc(param_1);
  return;
}




void FUN_00103d6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103c60(param_3);
  puVar2 = (undefined8 *)FUN_0010186d(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_0010379e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_0010298a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010186d(0x28,param_2);
  uVar1 = FUN_00101dfa(param_5);
  uVar2 = FUN_00101de8(param_4);
  uVar3 = FUN_00101dd6(param_3);
  uVar4 = FUN_00101d2a(param_2);
  uVar5 = FUN_00102aea(param_1);
                    /* try { // try from 00102623 to 00102627 has its CatchHandler @ 0010262a */
  FUN_00102b2a(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001024b8(undefined8 param_1)

{
  FUN_00102ac2(param_1);
  return;
}




void FUN_00103edd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102f22(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined local_98 [48];
  undefined4 local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f4(local_98);
  local_9c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00102f82 to 00103035 has its CatchHandler @ 00103084 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103db1("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101896(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103534(local_68,local_98);
                    /* try { // try from 0010303d to 00103041 has its CatchHandler @ 0010306f */
  FUN_00101549(local_68);
  FUN_00103514(local_68);
  FUN_00103514(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101896(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001019c2(param_1,param_2);
  local_28 = FUN_001019ec(param_1);
  cVar2 = FUN_00101a0a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101a30(param_1);
    uVar3 = FUN_00101a56(&local_38);
    cVar2 = FUN_00101a78(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101936;
    }
  }
  bVar1 = true;
LAB_00101936:
  if (bVar1) {
    uVar3 = FUN_00101a9f(param_2);
    FUN_00101adc(local_30,uVar3);
    FUN_00101b14(&local_28,&local_38);
    local_38 = FUN_00101b36(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a56(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_0010253e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00101adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4c(param_2);
  FUN_00101d5e(param_1,uVar1);
  return param_1;
}




void FUN_001045f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010186d(0x28,param_2);
  uVar1 = FUN_00103c60(param_3);
  uVar2 = FUN_00101d2a(param_2);
  uVar3 = FUN_00102aea(param_1);
  FUN_00103d2c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104335(void)

{
  return;
}




undefined8 FUN_001043b9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104382,local_18);
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




void FUN_0010175b(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101896(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103db1("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e09(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010383d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103992(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b59(undefined8 param_1)

{
  FUN_001033f0(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102672(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023e4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026ee(local_50);
    cVar2 = FUN_00101a78(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026ee(local_50);
      cVar2 = FUN_00101a78(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001029b6(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001026d8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001026d8(local_60);
          local_48[1] = 0;
          FUN_0010270c(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010298a(local_48);
          uVar6 = FUN_001026ee(*puVar5);
          cVar2 = FUN_00101a78(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010274c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102974(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010270c(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102900(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028ea(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028ea(local_60);
        uVar6 = FUN_001028ea(local_60);
        FUN_00102900(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102948(local_48);
        uVar6 = FUN_001026ee(*puVar5);
        cVar2 = FUN_00101a78(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010274c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102974(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010270c(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102900(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010221a;
  }
  lVar3 = FUN_001026c2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101f2e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001026d8(local_60);
    uVar6 = FUN_001026ee(*puVar5);
    cVar2 = FUN_00101a78(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101f2e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001026d8(local_60);
    local_48[1] = 0;
    FUN_0010270c(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010274c(local_60,param_3);
  }
LAB_0010221a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102a2e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d2a(param_2);
  uVar2 = FUN_00102aea(param_1);
  FUN_00102c62(uVar2,uVar1);
  return;
}




undefined8 FUN_0010252c(undefined8 param_1)

{
  return param_1;
}




void FUN_001026ee(undefined8 param_1)

{
  FUN_00102235(param_1);
  return;
}




undefined8 FUN_00104284(void)

{
  return 1;
}




void FUN_00103f33(undefined4 param_1)

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




void FUN_001036c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102974(local_28);
    FUN_001036c4(param_1,uVar1);
    lVar2 = FUN_00102aac(local_28);
    FUN_00102372(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102aea(undefined8 param_1)

{
  return param_1;
}




long FUN_001026d8(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001042dd(void)

{
  return;
}




void FUN_00104361(void)

{
  return;
}




void FUN_00101652(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  piVar1 = (int *)FUN_00101896(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = malloc(0x28);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103db1("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e09(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101dd6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001044e1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001036b4(void)

{
  return;
}





void FUN_001034f6(undefined8 param_1)

{
  FUN_001034d6(param_1);
  return;
}




void FUN_001036b6(void)

{
  return;
}




undefined8 FUN_00101dea(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cc0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102e3c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00102f06(undefined8 param_1)

{
  FUN_00102510(param_1);
  return;
}




undefined8 FUN_00103994(undefined8 param_1,undefined8 param_2)

{
  FUN_00103890(param_1,param_2);
  return param_1;
}




void FUN_00103890(undefined8 param_1,undefined8 param_2)

{
  FUN_001039c2(param_1,param_2);
  return;
}




undefined4 FUN_00101a7a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103c28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103c62(param_2);
  FUN_00103c74(uVar1,uVar2);
  return;
}




void FUN_001031e6(void)

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
  FUN_001034f6(local_98);
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
                    /* try { // try from 00103246 to 001032f9 has its CatchHandler @ 00103348 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103db3("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103536(local_68,local_98);
                    /* try { // try from 00103301 to 00103305 has its CatchHandler @ 00103333 */
  FUN_00101767(local_68);
  FUN_00103516(local_68);
  FUN_00103516(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039c2(void)

{
  return;
}




undefined8 FUN_00102e3c(void)

{
  return 0x333333333333333;
}




void FUN_001030b6(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034f6(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010310a to 0010316d has its CatchHandler @ 001031b9 */
  puVar1 = (undefined4 *)FUN_00101898(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101898(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101898(local_88,local_58);
  *puVar1 = 7;
  FUN_00103536(local_58,local_88);
                    /* try { // try from 00103175 to 00103179 has its CatchHandler @ 001031a4 */
  FUN_00101668(local_58);
  FUN_00103516(local_58);
  FUN_00103516(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010344c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103476(param_1);
  return;
}




void FUN_001038ba(void)

{
  return;
}




undefined8 FUN_00102976(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
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




void FUN_00103b79(undefined8 param_1)

{
  FUN_0010341f(param_1);
  return;
}




void FUN_00102596(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010186f(0x28,param_2);
  uVar1 = FUN_00101dfc(param_5);
  uVar2 = FUN_00101dea(param_4);
  uVar3 = FUN_00101dd8(param_3);
  uVar4 = FUN_00101d2c(param_2);
  uVar5 = FUN_00102aec(param_1);
                    /* try { // try from 00102625 to 00102629 has its CatchHandler @ 0010262c */
  FUN_00102b2c(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103516(undefined8 param_1)

{
  FUN_001035bc(param_1);
  return;
}




void FUN_00103fb7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103e33(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104384(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001038ec(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023e6(param_1);
  uVar2 = FUN_001039d6(param_2);
  uVar1 = FUN_001039ec(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028ec(param_1);
  uVar2 = FUN_00103b5b(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001026da(param_1);
  uVar2 = FUN_00103b79(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_001037a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102e00(void)

{
  return;
}




void FUN_00102f24(void)

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
  FUN_001034f6(local_98);
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
                    /* try { // try from 00102f84 to 00103037 has its CatchHandler @ 00103086 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103db3("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101898(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103536(local_68,local_98);
                    /* try { // try from 0010303f to 00103043 has its CatchHandler @ 00103071 */
  FUN_00101569(local_68);
  FUN_00103516(local_68);
  FUN_00103516(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102afe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc0(param_1,param_2,0);
  return;
}




bool FUN_00104488(pthread_t *param_1)

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




void FUN_001019c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c7e(param_1,param_2);
  return;
}




undefined8 * FUN_0010298c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101cce(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c46(undefined8 param_1)

{
  FUN_00102dee(param_1);
  return;
}




undefined8 FUN_00101e0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010256a(param_1);
  uVar2 = FUN_00101dfc(param_4);
  uVar3 = FUN_00101dea(param_3);
  uVar4 = FUN_00101dd8(param_2);
  FUN_00102596(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104043(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103536(undefined8 param_1,undefined8 param_2)

{
  FUN_001035fa(param_1,param_2);
  return;
}




void FUN_00101767(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101898(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if ((local_1c < 0) || (9 < local_1c)) {
    FUN_00103db3("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e0b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102bae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b2(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d0(param_1);
  FUN_001036c6(param_1,uVar1);
  FUN_001034b6(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102674(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023e6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026f0(local_50);
    cVar2 = FUN_00101a7a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026f0(local_50);
      cVar2 = FUN_00101a7a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001029b8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001026da(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001026da(local_60);
          local_48[1] = 0;
          FUN_0010270e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010298c(local_48);
          uVar6 = FUN_001026f0(*puVar5);
          cVar2 = FUN_00101a7a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010274e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102976(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010270e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102902(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028ec(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028ec(local_60);
        uVar6 = FUN_001028ec(local_60);
        FUN_00102902(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010294a(local_48);
        uVar6 = FUN_001026f0(*puVar5);
        cVar2 = FUN_00101a7a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010274e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102976(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010270e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102902(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010221c;
  }
  lVar3 = FUN_001026c4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101f30:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001026da(local_60);
    uVar6 = FUN_001026f0(*puVar5);
    cVar2 = FUN_00101a7a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101f30;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001026da(local_60);
    local_48[1] = 0;
    FUN_0010270e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010274e(local_60,param_3);
  }
LAB_0010221c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00101ade(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4e(param_2);
  FUN_00101d60(param_1,uVar1);
  return param_1;
}




void FUN_0010359c(undefined8 param_1)

{
  FUN_001036b6(param_1);
  return;
}




void FUN_001042f5(void)

{
  return;
}




void FUN_0010270e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001045bd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




int FUN_001042a4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101a58(undefined8 *param_1)

{
  FUN_00101d2c(*param_1);
  return;
}




long FUN_001039ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103b98(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103bfc(param_2);
                    /* try { // try from 00103a5b to 00103aed has its CatchHandler @ 00103b19 */
    uVar2 = FUN_001039ec(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103c12(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103b98(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103bfc(local_38);
      uVar2 = FUN_001039ec(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103c12(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010256a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aec(param_1);
  FUN_00102afe(uVar1,1);
  return;
}




void FUN_001034d6(undefined8 param_1)

{
  FUN_00103560(param_1);
  return;
}




void FUN_00102e54(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102ea6(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103560(long param_1)

{
  FUN_00103686(param_1);
  FUN_001036a6(param_1);
  FUN_0010344c(param_1 + 8);
  return;
}




undefined8 FUN_00104295(void)

{
  return 0;
}




undefined8 FUN_001023fc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102237(local_38);
    cVar1 = FUN_00101a7a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102976(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102aae(local_38);
    }
  }
  FUN_001023b2(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102510(param_2);
  uVar1 = FUN_0010252e(uVar1);
  FUN_00102540(param_1,uVar1);
  return;
}




void FUN_0010436e(void)

{
  return;
}




void FUN_00103e5f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103c74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010256a(param_1);
  uVar2 = FUN_00103c62(param_2);
  FUN_00103cc0(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_001044e3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001042be(void)

{
  return;
}




void FUN_00104337(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined4 * FUN_00103b98(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029f8(param_2);
  puVar2 = (undefined4 *)FUN_00103c28(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102bfe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102ddb(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001042ea(void)

{
  return;
}




undefined8 FUN_00103c12(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00104506(undefined8 *param_1)

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




undefined8 FUN_001023d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102c64(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e00(param_1,param_2);
  return;
}




void FUN_001038ce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103730(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010383f(param_1,param_2);
  FUN_001038ba(param_1,param_2);
  FUN_0010344c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010341f(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00102b9c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103dd9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103e0b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104363(void)

{
  return;
}




undefined8 FUN_0010274e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001023d0(param_1);
  local_50 = FUN_001023e6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102237(local_58);
    local_59 = FUN_00101a7a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102976(local_58);
    }
    else {
      local_58 = FUN_00102aae(local_58);
    }
  }
  FUN_001023b2(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102bae(param_1);
    cVar1 = FUN_00101a0c(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bfe(local_38,&local_58,&local_50);
      goto LAB_001028d0;
    }
    FUN_0010294a(&local_48);
  }
  uVar2 = FUN_001026f0(local_48);
  cVar1 = FUN_00101a7a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001029b8(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bfe(local_38,&local_58,&local_50);
  }
LAB_001028d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d1e(void)

{
  return;
}




void FUN_00102a30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d2c(param_2);
  uVar2 = FUN_00102aec(param_1);
  FUN_00102c64(uVar2,uVar1);
  return;
}




void FUN_00104010(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010457f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103f8f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102237(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029f8(param_1);
  FUN_00102a1a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034b6(undefined8 param_1)

{
  FUN_0010359c(param_1);
  return;
}




void FUN_00103db3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023e6(param_1);
  uVar2 = FUN_001023d0(param_1);
  FUN_001023fc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103f35(undefined4 param_1)

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




void FUN_00102e14(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103b5b(undefined8 param_1)

{
  FUN_001033f2(param_1);
  return;
}




void FUN_00101885(void)

{
  return;
}




undefined8 FUN_0010338d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103db3("Calling good()...");
  FUN_00103378();
  FUN_00103db3("Finished good()");
  FUN_00103db3("Calling bad()...");
  FUN_00102f24();
  FUN_00103db3("Finished bad()");
  return 0;
}




ulong FUN_001041a7(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101d2c(long param_1)

{
  FUN_001024ba(param_1 + 0x20);
  return;
}




undefined8 FUN_00102a1a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_001033f2(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010383f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103994(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001023b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101a0c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_0010252e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104316(void)

{
  return;
}




undefined8
FUN_0010228a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001023e6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026f0(param_3);
      uVar5 = FUN_00102237(param_4);
      cVar1 = FUN_00101a7a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010230e;
      }
    }
  }
  bVar2 = true;
LAB_0010230e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001023b2(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001042d4(void)

{
  return;
}




void FUN_001042df(void)

{
  return;
}




long FUN_001028ec(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001026f0(undefined8 param_1)

{
  FUN_00102237(param_1);
  return;
}




void FUN_00104358(void)

{
  return;
}




undefined8 FUN_00101d4e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ea6(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ee8(param_2);
  puVar2 = (undefined4 *)FUN_0010252e(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00101dd8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103476(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




long FUN_001037b6(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00104342(void)

{
  return;
}




void FUN_00102374(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a30(param_1,param_2);
  FUN_00102a74(param_1,param_2);
  return;
}




undefined8 FUN_00102ddb(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ad6(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00104286(void)

{
  return 1;
}




void FUN_00101b16(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101dfc(param_5);
  uVar2 = FUN_00101dea(param_4);
  uVar3 = FUN_00101dd8(param_3);
  FUN_00102d10(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101668(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101898(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103db3("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e0b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c62(param_3);
  FUN_00103d6c(param_1,param_2,uVar1);
  return;
}




void FUN_001024ba(undefined8 param_1)

{
  FUN_00102ac4(param_1);
  return;
}




void FUN_001029b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b9c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001019ee(undefined8 param_1)

{
  FUN_00101cce(param_1);
  return;
}




void FUN_00104300(void)

{
  return;
}




void FUN_0010430b(void)

{
  return;
}




void FUN_00102c8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e14(param_1,param_2,param_3);
  return;
}




long FUN_001026da(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010432c(void)

{
  return;
}




undefined8 FUN_00102aae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101ab4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d98(param_1,param_2);
  return;
}




void FUN_00102d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd8(param_3);
  uVar1 = FUN_00101dea(param_4);
  FUN_00101ab4(local_38,uVar1);
  FUN_00101dfc(param_5);
  uVar1 = FUN_0010186f(8,param_2);
                    /* try { // try from 00102d98 to 00102d9c has its CatchHandler @ 00102d9f */
  FUN_00102e54(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103eb4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8
FUN_00101b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101dfc(param_5);
  uVar2 = FUN_00101dea(param_4);
  uVar3 = FUN_00101dd8(param_3);
  local_40 = FUN_00101e0e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101bb4 to 00101bf7 has its CatchHandler @ 00101c35 */
  uVar1 = FUN_00102237(local_40);
  local_38 = FUN_00101e8e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102374(param_1,local_40);
    FUN_001023b2(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010228a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined4 FUN_00101a32(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101d1e(param_1);
  return unaff_EBX;
}




void FUN_00103378(void)

{
  FUN_001030b6();
  FUN_001031e6();
  return;
}




void FUN_00103d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103c62(param_3);
  puVar2 = (undefined8 *)FUN_0010186f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00102902(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b9c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b9c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f0a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001035fa(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103730(param_1,param_2);
  lVar1 = FUN_001037a0(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001037b6(param_1);
                    /* try { // try from 00103655 to 00103659 has its CatchHandler @ 0010365f */
    uVar3 = FUN_001037cc(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00102a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aec(param_1);
  FUN_00102c8e(uVar1,param_2,1);
  return;
}




void FUN_00103830(void)

{
  return;
}




undefined8 FUN_00102aec(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102dee(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fe2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_00101898(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001019c4(param_1,param_2);
  local_28 = FUN_001019ee(param_1);
  cVar2 = FUN_00101a0c(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101a32(param_1);
    uVar3 = FUN_00101a58(&local_38);
    cVar2 = FUN_00101a7a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101938;
    }
  }
  bVar1 = true;
LAB_00101938:
  if (bVar1) {
    uVar3 = FUN_00101aa1(param_2);
    FUN_00101ade(local_30,uVar3);
    FUN_00101b16(&local_28,&local_38);
    local_38 = FUN_00101b38(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a58(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010186f(0x28,param_2);
  uVar1 = FUN_00103c62(param_3);
  uVar2 = FUN_00101d2c(param_2);
  uVar3 = FUN_00102aec(param_1);
  FUN_00103d2e(uVar3,uVar2,uVar1);
  return;
}




void FUN_001036c6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102976(local_28);
    FUN_001036c6(param_1,uVar1);
    lVar2 = FUN_00102aae(local_28);
    FUN_00102374(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 * FUN_0010294a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4e(param_2);
  *param_1 = uVar1;
  return;
}




long FUN_001023e6(long param_1)

{
  return param_1 + 8;
}




void FUN_00103e89(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ee8(undefined8 param_1)

{
  FUN_00102f06(param_1);
  return;
}




undefined8 FUN_0010186f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102510(undefined8 param_1)

{
  FUN_00102ad6(param_1);
  return;
}




undefined8 FUN_00101aa1(undefined8 param_1)

{
  return param_1;
}




void FUN_0010459e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103c62(undefined8 param_1)

{
  return param_1;
}




void FUN_00104321(void)

{
  return;
}




void FUN_00104660(void)

{
  return;
}




void FUN_00104379(void)

{
  return;
}




void FUN_00101569(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101898(param_1,&local_24);
  local_1c = *piVar1;
  local_18 = operator_new__(0x28);
  for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
    *(undefined4 *)((long)local_18 + (long)local_20 * 4) = 0;
  }
  if (local_1c < 0) {
    FUN_00103db3("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103e0b(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001037cc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001038ce(local_18,param_1);
  FUN_001038ec(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001039d6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101dfc(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f8(long param_1)

{
  FUN_00102c46(param_1 + 0x20);
  return;
}




void FUN_001024d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4e(param_2);
  FUN_00102540(param_1,uVar1);
  return;
}




undefined8 FUN_001026c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




ulong FUN_001040a3(long param_1,ulong param_2,long param_3)

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




void FUN_00103edf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001036a6(void)

{
  return;
}




undefined8 FUN_00102ac4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102674(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001042c9(void)

{
  return;
}




void FUN_0010434d(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_00101d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d4e(param_2);
  FUN_001024d8(param_1,uVar1);
  return;
}




undefined8 FUN_001043bb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104384,local_18);
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




void FUN_00103686(undefined8 param_1)

{
  FUN_00103830(param_1);
  return;
}





undefined8 FUN_00102430(undefined8 param_1)

{
  return param_1;
}




void FUN_00104099(void)

{
  return;
}




undefined8 FUN_00104128(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040f1,local_18);
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




long FUN_001027ee(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103218(undefined8 param_1)

{
  FUN_001032fe(param_1);
  return;
}




void FUN_00103c77(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102976(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ee(param_1);
  FUN_00102b90(uVar1,param_2,1);
  return;
}




undefined8 FUN_00102650(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001022d2(param_1);
  local_50 = FUN_001022e8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102139(local_58);
    local_59 = FUN_0010197c(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102878(local_58);
    }
    else {
      local_58 = FUN_001029b0(local_58);
    }
  }
  FUN_001022b4(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102ab0(param_1);
    cVar1 = FUN_0010190e(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102b00(local_38,&local_58,&local_50);
      goto LAB_001027d2;
    }
    FUN_0010284c(&local_48);
  }
  uVar2 = FUN_001025f2(local_48);
  cVar1 = FUN_0010197c(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001028ba(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102b00(local_38,&local_58,&local_50);
  }
LAB_001027d2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00101934(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101c20(param_1);
  return unaff_EBX;
}




undefined8 FUN_00101cfe(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104002(void)

{
  return 0;
}




void FUN_001043d0(void)

{
  return;
}




undefined8 FUN_001019e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c50(param_2);
  FUN_00101c62(param_1,uVar1);
  return param_1;
}




void FUN_00102d16(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101cda(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102412(param_2);
  uVar1 = FUN_00102430(uVar1);
  FUN_00102442(param_1,uVar1);
  return;
}




void FUN_00104036(void)

{
  return;
}




void FUN_00103db0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010402b(void)

{
  return;
}




void FUN_0010406d(void)

{
  return;
}




void FUN_001038bd(undefined8 param_1)

{
  FUN_00103154(param_1);
  return;
}




void FUN_00101c20(void)

{
  return;
}




void FUN_00103592(void)

{
  return;
}




void FUN_001040a4(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102576(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022e8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025f2(local_50);
    cVar2 = FUN_0010197c(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025f2(local_50);
      cVar2 = FUN_0010197c(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001028ba(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001025dc(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001025dc(local_60);
          local_48[1] = 0;
          FUN_00102610(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010288e(local_48);
          uVar6 = FUN_001025f2(*puVar5);
          cVar2 = FUN_0010197c(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102650(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102878(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102610(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102804(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027ee(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027ee(local_60);
        uVar6 = FUN_001027ee(local_60);
        FUN_00102804(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010284c(local_48);
        uVar6 = FUN_001025f2(*puVar5);
        cVar2 = FUN_0010197c(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102650(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102878(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102610(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102804(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010211e;
  }
  lVar3 = FUN_001025c6(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101e32:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001025dc(local_60);
    uVar6 = FUN_001025f2(*puVar5);
    cVar2 = FUN_0010197c(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101e32;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001025dc(local_60);
    local_48[1] = 0;
    FUN_00102610(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102650(local_60,param_3);
  }
LAB_0010211e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00104273(undefined8 *param_1)

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




void FUN_00103d4f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 * FUN_0010288e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




int FUN_00104011(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102a00(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bc2(param_1,param_2,0);
  return;
}




undefined8 FUN_00101771(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a9e(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a9e(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103b20(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00102bc2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d3e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001038db(undefined8 param_1)

{
  FUN_00103181(param_1);
  return;
}




undefined8 FUN_00101c50(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f83(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103258(local_88);
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102ffd to 00103066 has its CatchHandler @ 001030b2 */
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_00103298(local_58,local_88);
                    /* try { // try from 0010306e to 00103072 has its CatchHandler @ 0010309d */
  FUN_0010164d(local_58);
  FUN_00103278(local_58);
  FUN_00103278(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bf6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103258(undefined8 param_1)

{
  FUN_00103238(param_1);
  return;
}




void FUN_001040af(void)

{
  return;
}




void FUN_00102b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102cdd(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a9e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103ba0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001022b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001040d0(void)

{
  return;
}




long FUN_001025dc(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103278(undefined8 param_1)

{
  FUN_0010331e(param_1);
  return;
}




void FUN_001025f2(undefined8 param_1)

{
  FUN_00102139(param_1);
  return;
}




void FUN_00102da8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102deb(param_2);
  puVar2 = (undefined4 *)FUN_00102430(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00102878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001040c5(void)

{
  return;
}




void FUN_00101c2e(long param_1)

{
  FUN_001023bc(param_1 + 0x20);
  return;
}




void FUN_00101c62(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c50(param_2);
  FUN_001023da(param_1,uVar1);
  return;
}




void FUN_001023da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c50(param_2);
  FUN_00102442(param_1,uVar1);
  return;
}




undefined8 FUN_0010364e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022e8(param_1);
  uVar2 = FUN_00103738(param_2);
  uVar1 = FUN_0010374e(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027ee(param_1);
  uVar2 = FUN_001038bd(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001025dc(param_1);
  uVar2 = FUN_001038db(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102442(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c50(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102d02(void)

{
  return;
}




undefined8 FUN_001019a3(undefined8 param_1)

{
  return param_1;
}




void FUN_0010352e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103630(local_18,param_1);
  FUN_0010364e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010408e(void)

{
  return;
}




ulong FUN_00103e10(long param_1,ulong param_2,long param_3)

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




void FUN_001040ba(void)

{
  return;
}




void FUN_001019b6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c9a(param_1,param_2);
  return;
}




void FUN_00101787(void)

{
  return;
}




void FUN_00103408(void)

{
  return;
}




void FUN_00101a18(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001031ae(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031d8(param_1);
  return;
}




void FUN_00102932(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101c2e(param_2);
  uVar2 = FUN_001029ee(param_1);
  FUN_00102b66(uVar2,uVar1);
  return;
}




undefined8 FUN_001029c6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bcc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001022d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010335c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103492(param_1,param_2);
  lVar1 = FUN_00103502(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103518(param_1);
                    /* try { // try from 001033b7 to 001033bb has its CatchHandler @ 001033c1 */
    uVar3 = FUN_0010352e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103c21(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00104250(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 * FUN_0010284c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104062(void)

{
  return;
}




void FUN_00103b78(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010195a(undefined8 *param_1)

{
  FUN_00101c2e(*param_1);
  return;
}




undefined8 FUN_001036f6(undefined8 param_1,undefined8 param_2)

{
  FUN_001035f2(param_1,param_2);
  return param_1;
}




void FUN_001030df(void)

{
  FUN_00102f83();
  return;
}




void FUN_0010398a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039c4(param_2);
  FUN_001039d6(uVar1,uVar2);
  return;
}




undefined8 FUN_00101cec(undefined8 param_1)

{
  return param_1;
}




long FUN_0010179a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001018c6(param_1,param_2);
  local_28 = FUN_001018f0(param_1);
  cVar2 = FUN_0010190e(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101934(param_1);
    uVar3 = FUN_0010195a(&local_38);
    cVar2 = FUN_0010197c(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010183a;
    }
  }
  bVar1 = true;
LAB_0010183a:
  if (bVar1) {
    uVar3 = FUN_001019a3(param_2);
    FUN_001019e0(local_30,uVar3);
    FUN_00101a18(&local_28,&local_38);
    local_38 = FUN_00101a3a(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010195a(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103298(undefined8 param_1,undefined8 param_2)

{
  FUN_0010335c(param_1,param_2);
  return;
}




void FUN_00102139(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028fa(param_1);
  FUN_0010291c(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104083(void)

{
  return;
}




void FUN_001028ba(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a9e(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101771(0x30,param_2);
  uVar1 = FUN_00101cfe(param_5);
  uVar2 = FUN_00101cec(param_4);
  uVar3 = FUN_00101cda(param_3);
  uVar4 = FUN_00101c2e(param_2);
  uVar5 = FUN_001029ee(param_1);
                    /* try { // try from 00102527 to 0010252b has its CatchHandler @ 0010252e */
  FUN_00102a2e(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001023bc(undefined8 param_1)

{
  FUN_001029c6(param_1);
  return;
}




void FUN_00102e27(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103258(local_88);
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102ea1 to 00102f0a has its CatchHandler @ 00102f56 */
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010179a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_00103298(local_58,local_88);
                    /* try { // try from 00102f12 to 00102f16 has its CatchHandler @ 00102f41 */
  FUN_00101529(local_58);
  FUN_00103278(local_58);
  FUN_00103278(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d7d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102b66(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d02(param_1,param_2);
  return;
}




void FUN_0010404c(void)

{
  return;
}




void FUN_00101b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022e8(param_1);
  uVar2 = FUN_001022d2(param_1);
  FUN_001022fe(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_0010190e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001030ef(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b20("Calling good()...");
  FUN_001030df();
  FUN_00103b20("Finished good()");
  FUN_00103b20("Calling bad()...");
  FUN_00102e27();
  FUN_00103b20("Finished bad()");
  return 0;
}




undefined8 FUN_001025c6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104057(void)

{
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




void FUN_0010331e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d2(param_1);
  FUN_00103428(param_1,uVar1);
  FUN_00103218(param_1);
  return;
}




undefined8 FUN_00102cdd(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103502(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001029d8(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001032c2(long param_1)

{
  FUN_001033e8(param_1);
  FUN_00103408(param_1);
  FUN_001031ae(param_1 + 8);
  return;
}




long FUN_001022e8(long param_1)

{
  return param_1 + 8;
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
FUN_00101a3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101cfe(param_5);
  uVar2 = FUN_00101cec(param_4);
  uVar3 = FUN_00101cda(param_3);
  local_40 = FUN_00101d10(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ab6 to 00101af9 has its CatchHandler @ 00101b37 */
  uVar1 = FUN_00102139(local_40);
  local_38 = FUN_00101d90(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102276(param_1,local_40);
    FUN_001022b4(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010218c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102610(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a9e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103724(void)

{
  return;
}




void FUN_00103630(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_00103154(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




ulong FUN_00103f14(long param_1,ulong param_2,long param_3)

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




void FUN_001031d8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104078(void)

{
  return;
}




void FUN_001042ec(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001032fe(undefined8 param_1)

{
  FUN_00103418(param_1);
  return;
}




void FUN_00103cfc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039c4(param_3);
  FUN_00103ace(param_1,param_2,uVar1);
  return;
}




void FUN_00102deb(undefined8 param_1)

{
  FUN_00102e09(param_1);
  return;
}




undefined8 FUN_00101d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010246c(param_1);
  uVar2 = FUN_00101cfe(param_4);
  uVar3 = FUN_00101cec(param_3);
  uVar4 = FUN_00101cda(param_2);
  FUN_00102498(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103b46(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102ab0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b4(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103418(void)

{
  return;
}




undefined4 * FUN_001038fa(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028fa(param_2);
  puVar2 = (undefined4 *)FUN_0010398a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102c12(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cda(param_3);
  uVar1 = FUN_00101cec(param_4);
  FUN_001019b6(local_38,uVar1);
  FUN_00101cfe(param_5);
  uVar1 = FUN_00101771(0x10,param_2);
                    /* try { // try from 00102c9a to 00102c9e has its CatchHandler @ 00102ca1 */
  FUN_00102d56(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101529(undefined8 param_1)

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
  plVar1 = (long *)FUN_0010179a(param_1,&local_94);
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
  FUN_00103b20(local_90);
  free(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c4c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010361c(void)

{
  return;
}




undefined8 FUN_001039d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010246c(param_1);
  uVar2 = FUN_001039c4(param_2);
  FUN_00103a22(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001028fa(long param_1)

{
  FUN_00102b48(param_1 + 0x20);
  return;
}




undefined8 FUN_001022fe(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102139(local_38);
    cVar1 = FUN_0010197c(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102878(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001029b0(local_38);
    }
  }
  FUN_001022b4(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102d56(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102da8(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ca2(undefined4 param_1)

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




void FUN_00102e09(undefined8 param_1)

{
  FUN_00102412(param_1);
  return;
}




undefined8 FUN_001029ee(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102cf0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010164d(undefined8 param_1)

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
  plVar1 = (long *)FUN_0010179a(param_1,&local_94);
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
  FUN_00103b20(local_90);
  free(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101bd0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104041(void)

{
  return;
}




void FUN_00102276(undefined8 param_1,undefined8 param_2)

{
  FUN_00102932(param_1,param_2);
  FUN_00102976(param_1,param_2);
  return;
}




undefined8 FUN_00103738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001040db(void)

{
  return;
}




undefined8 FUN_001039c4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102412(undefined8 param_1)

{
  FUN_001029d8(param_1);
  return;
}




void FUN_0010432a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103ace(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039c4(param_3);
  puVar3 = (undefined8 *)FUN_00101771(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00103d24(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102576(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018c6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b80(param_1,param_2);
  return;
}




void FUN_00102b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d16(param_1,param_2,param_3);
  return;
}




bool FUN_001041f5(pthread_t *param_1)

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




long FUN_0010374e(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001038fa(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010395e(param_2);
                    /* try { // try from 001037bd to 0010384f has its CatchHandler @ 0010387b */
    uVar2 = FUN_0010374e(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103974(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001038fa(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010395e(local_38);
      uVar2 = FUN_0010374e(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103974(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




long FUN_00103518(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001033e8(undefined8 param_1)

{
  FUN_00103592(param_1);
  return;
}




undefined8 FUN_00103ff3(void)

{
  return 1;
}




void FUN_00102b48(undefined8 param_1)

{
  FUN_00102cf0(param_1);
  return;
}




void FUN_00103492(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035a1(param_1,param_2);
  FUN_0010361c(param_1,param_2);
  FUN_001031ae(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d3e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00102a9e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010246c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ee(param_1);
  FUN_00102a00(uVar1,1);
  return;
}




void FUN_0010430b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103238(undefined8 param_1)

{
  FUN_001032c2(param_1);
  return;
}




undefined8 FUN_0010395e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103428(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102878(local_28);
    FUN_00103428(param_1,uVar1);
    lVar2 = FUN_001029b0(local_28);
    FUN_00102276(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001035f2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103724(param_1,param_2);
  return;
}




undefined8
FUN_0010218c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001022e8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025f2(param_3);
      uVar5 = FUN_00102139(param_4);
      cVar1 = FUN_0010197c(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102210;
      }
    }
  }
  bVar2 = true;
LAB_00102210:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001022b4(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001040f1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103a22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101771(0x30,param_2);
  uVar1 = FUN_001039c4(param_3);
  uVar2 = FUN_00101c2e(param_2);
  uVar3 = FUN_001029ee(param_1);
  FUN_00103a90(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001035a1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036f6(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010291c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001018f0(undefined8 param_1)

{
  FUN_00101bd0(param_1);
  return;
}




void FUN_00102a2e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cfe(param_5);
  uVar2 = FUN_00101cec(param_4);
  uVar3 = FUN_00101cda(param_3);
  FUN_00102c12(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




long FUN_00103181(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001040e6(void)

{
  return;
}




undefined4 FUN_0010197c(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




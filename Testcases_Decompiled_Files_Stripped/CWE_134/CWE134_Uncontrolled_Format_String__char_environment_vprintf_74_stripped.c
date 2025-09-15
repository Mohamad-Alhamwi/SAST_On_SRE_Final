
void FUN_0010365c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038c0(param_1,param_2,param_3);
  return;
}




undefined4 * FUN_0010381c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001033e4(param_2);
  puVar2 = (undefined4 *)FUN_00103a28(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined4 FUN_0010213c(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001025a2(param_1);
  return unaff_EBX;
}




void FUN_00102f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101c24(0x30,param_2);
  uVar1 = FUN_00102680(param_5);
  uVar2 = FUN_0010266e(param_4);
  uVar3 = FUN_0010265c(param_3);
  uVar4 = FUN_001025b0(param_2);
  uVar5 = FUN_00103620(param_1);
                    /* try { // try from 00103027 to 0010302b has its CatchHandler @ 0010302e */
  FUN_001036e3(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 * FUN_00103378(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103acb(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103a16(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d72(undefined8 param_1)

{
  FUN_00101e18(param_1);
  return;
}




void FUN_00103d77(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101e56(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103ca8(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103406(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103ade(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f6c(param_1);
  uVar2 = FUN_00103acb(param_2);
  FUN_00103b6e(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00103150(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001020b8(param_1);
  local_50 = FUN_00102de8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102abb(local_58);
    local_59 = FUN_00102184(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102497(local_58);
    }
    else {
      local_58 = FUN_001024ad(local_58);
    }
  }
  FUN_00102bf8(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103766(param_1);
    cVar1 = FUN_00102116(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001037b6(local_38,&local_58,&local_50);
      goto LAB_001032d2;
    }
    FUN_0010334c(&local_48);
  }
  uVar2 = FUN_001030f2(local_48);
  cVar1 = FUN_00102184(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001033a4(local_38,&local_48,&local_40);
  }
  else {
    FUN_001037b6(local_38,&local_58,&local_50);
  }
LAB_001032d2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001033e4(long param_1)

{
  FUN_001037fe(param_1 + 0x20);
  return;
}




void FUN_001035e3(undefined8 param_1)

{
  FUN_00101c4d(param_1);
  return;
}




void FUN_00103a28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103acb(param_2);
  FUN_00103ade(uVar1,uVar2);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102712(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103076(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102de8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001030f2(local_50);
    cVar2 = FUN_00102184(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001030f2(local_50);
      cVar2 = FUN_00102184(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001033a4(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001030dc(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001030dc(local_60);
          local_48[1] = 0;
          FUN_00103110(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103378(local_48);
          uVar6 = FUN_001030f2(*puVar5);
          cVar2 = FUN_00102184(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00103150(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102497(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00103110(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103304(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001032ee(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001032ee(local_60);
        uVar6 = FUN_001032ee(local_60);
        FUN_00103304(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010334c(local_48);
        uVar6 = FUN_001030f2(*puVar5);
        cVar2 = FUN_00102184(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00103150(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102497(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00103110(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103304(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102aa0;
  }
  lVar3 = FUN_001030c6(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001027b4:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001030dc(local_60);
    uVar6 = FUN_001030f2(*puVar5);
    cVar2 = FUN_00102184(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001027b4;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001030dc(local_60);
    local_48[1] = 0;
    FUN_00103110(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00103150(local_60,param_3);
  }
LAB_00102aa0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104910(void)

{
  return;
}




void FUN_00103bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103acb(param_3);
  FUN_00103c56(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102552(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bf8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010368e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010428e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010410b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00104667(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104630,local_18);
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




void FUN_00103a7a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103b2a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038ac(void)

{
  return;
}




void FUN_001030f2(undefined8 param_1)

{
  FUN_00102abb(param_1);
  return;
}




void FUN_001033a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103753(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101795(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
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
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d52(local_e8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 00101875 to 001018f6 has its CatchHandler @ 0010194e */
  plVar1 = (long *)FUN_00101e56(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00101e56(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00101e56(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_00101d92(local_b8,local_e8);
                    /* try { // try from 00101901 to 00101905 has its CatchHandler @ 00101936 */
  FUN_00103eb5(local_b8);
  FUN_00101d72(local_b8);
  FUN_00101d72(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102de8(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010478f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ca8(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101cd2(param_1);
  return;
}




void FUN_00102abb(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001033e4(param_1);
  FUN_00103406(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010202e(void)

{
  return;
}




undefined8 FUN_00102f30(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00102184(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




ulong FUN_0010434f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001036a0(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101c24(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102eda(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d2(param_2);
  FUN_00102f42(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_00103753(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021ab(undefined8 param_1)

{
  return param_1;
}




void FUN_00101df8(undefined8 param_1)

{
  FUN_0010203e(param_1);
  return;
}




void FUN_001036e3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102680(param_5);
  uVar2 = FUN_0010266e(param_4);
  uVar3 = FUN_0010265c(param_3);
  FUN_00103938(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001045ac(void)

{
  return;
}




void FUN_0010261c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102f12(param_2);
  uVar1 = FUN_00102f30(uVar1);
  FUN_00102f42(param_1,uVar1);
  return;
}




void FUN_001048a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010456a(void)

{
  return;
}




void FUN_00101d52(undefined8 param_1)

{
  FUN_00101d32(param_1);
  return;
}




void FUN_00103b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101c24(0x30,param_2);
  uVar1 = FUN_00103acb(param_3);
  uVar2 = FUN_001025b0(param_2);
  uVar3 = FUN_00103620(param_1);
  FUN_00103bfa(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102502(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102de8(param_1);
  uVar2 = FUN_001020b8(param_1);
  FUN_00102dfe(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103632(undefined8 param_1,undefined8 param_2)

{
  FUN_001038ac(param_1,param_2);
  return;
}




long FUN_001032ee(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001036b5(undefined8 param_1,undefined8 param_2)

{
  FUN_001038e8(param_1,param_2,0);
  return;
}




int FUN_00104550(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_0010240e(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001020f8(undefined8 param_1)

{
  FUN_00102552(param_1);
  return;
}




void FUN_00104625(void)

{
  return;
}




void FUN_00104135(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00101e56(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001020ce(param_1,param_2);
  local_28 = FUN_001020f8(param_1);
  cVar2 = FUN_00102116(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_0010213c(param_1);
    uVar3 = FUN_00102162(&local_38);
    cVar2 = FUN_00102184(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101ef6;
    }
  }
  bVar1 = true;
LAB_00101ef6:
  if (bVar1) {
    uVar3 = FUN_001021ab(param_2);
    FUN_001021e8(local_30,uVar3);
    FUN_00102220(&local_28,&local_38);
    local_38 = FUN_00102242(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00102162(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_00103eb5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101e56(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103de6(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001047b2(undefined8 *param_1)

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




void FUN_00104575(void)

{
  return;
}




void FUN_001045ee(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00103c37(undefined8 param_1)

{
  FUN_00102f12(param_1);
  return;
}




void FUN_00102f12(undefined8 param_1)

{
  FUN_001036a0(param_1);
  return;
}




void FUN_001045a1(void)

{
  return;
}




void FUN_00103ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010482b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102388(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c16(param_1,param_2);
  FUN_00102c90(param_1,param_2);
  FUN_00101ca8(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d2(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00103a62(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00103896(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00103474(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010381c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103880(param_2);
                    /* try { // try from 001034e3 to 00103575 has its CatchHandler @ 001035a1 */
    uVar2 = FUN_00103474(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103896(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010381c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103880(local_38);
      uVar2 = FUN_00103474(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103896(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102ebc(undefined8 param_1)

{
  FUN_0010368e(param_1);
  return;
}




void FUN_001040b7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001040df(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010461a(void)

{
  return;
}




undefined8 FUN_0010265c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010203e(void)

{
  return;
}




void FUN_00102c66(undefined8 param_1,undefined8 param_2)

{
  FUN_0010344a(param_1,param_2);
  return;
}




void FUN_001042ef(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010484a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104263(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001021be(undefined8 param_1,undefined8 param_2)

{
  FUN_0010261c(param_1,param_2);
  return;
}




undefined8 FUN_00103620(undefined8 param_1)

{
  return param_1;
}




void FUN_00104085(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010200e(undefined8 param_1)

{
  FUN_00102488(param_1);
  return;
}




void FUN_0010423b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103110(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103753(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103bdc(undefined8 param_1)

{
  FUN_00103c37(param_1);
  return;
}




long FUN_00101c4d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010344a(void)

{
  return;
}




undefined8 FUN_00104532(void)

{
  return 1;
}




void FUN_00103c56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103acb(param_3);
  puVar3 = (undefined8 *)FUN_00101c24(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_0010204e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102497(local_28);
    FUN_0010204e(param_1,uVar1);
    lVar2 = FUN_001024ad(local_28);
    FUN_001024c4(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102c16(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010341c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010345e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103a03(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_00102242(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102680(param_5);
  uVar2 = FUN_0010266e(param_4);
  uVar3 = FUN_0010265c(param_3);
  local_40 = FUN_00102692(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001022be to 00102301 has its CatchHandler @ 0010233f */
  uVar1 = FUN_00102abb(local_40);
  local_38 = FUN_00102712(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001024c4(param_1,local_40);
    FUN_00102bf8(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102b0e(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101d12(undefined8 param_1)

{
  FUN_00101df8(param_1);
  return;
}




undefined8 FUN_001024ad(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001021e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d2(param_2);
  FUN_001025e4(param_1,uVar1);
  return param_1;
}




void FUN_001045cd(void)

{
  return;
}




void FUN_0010458b(void)

{
  return;
}




void FUN_00104596(void)

{
  return;
}




undefined8 FUN_0010266e(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025d2(param_2);
  FUN_00102eda(param_1,uVar1);
  return;
}




void FUN_0010460f(void)

{
  return;
}




undefined8 FUN_001020b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103304(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103753(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103753(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102116(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103601(undefined8 param_1)

{
  FUN_00101c7a(param_1);
  return;
}




void FUN_001038c0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001045f9(void)

{
  return;
}




void FUN_00102220(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001030c6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00102d6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001025b0(param_2);
  uVar2 = FUN_00103620(param_1);
  FUN_00103632(uVar2,uVar1);
  return;
}




undefined8 FUN_00104541(void)

{
  return 0;
}




void FUN_00101e18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020b8(param_1);
  FUN_0010204e(param_1,uVar1);
  FUN_00101d12(param_1);
  return;
}




undefined8 FUN_00102dfe(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102abb(local_38);
    cVar1 = FUN_00102184(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102497(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001024ad(local_38);
    }
  }
  FUN_00102bf8(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101bbf(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010405f("Calling good()...");
  FUN_00101baa();
  FUN_0010405f("Finished good()");
  FUN_0010405f("Calling bad()...");
  FUN_00101569();
  FUN_0010405f("Finished bad()");
  return 0;
}




void FUN_00103ff0(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101e56(param_1,&local_1c);
  local_18 = *puVar1;
  FUN_00103f24(local_18,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102424(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ca4(local_18,param_1);
  FUN_00102cc2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_00102b0e(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102de8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001030f2(param_3);
      uVar5 = FUN_00102abb(param_4);
      cVar1 = FUN_00102184(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102b92;
      }
    }
  }
  bVar2 = true;
LAB_00102b92:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102bf8(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101cd2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001045b7(void)

{
  return;
}




void FUN_001045c2(void)

{
  return;
}




void FUN_00102f6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103620(param_1);
  FUN_001036b5(uVar1,1);
  return;
}




undefined8 FUN_001025d2(undefined8 param_1)

{
  return param_1;
}




void FUN_001045e3(void)

{
  return;
}




void FUN_00102ca4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101dbc(long param_1)

{
  FUN_0010200e(param_1);
  FUN_0010202e(param_1);
  FUN_00101ca8(param_1 + 8);
  return;
}




undefined8 FUN_00103076(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bf8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010418b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f82(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00102388(param_1,param_2);
  lVar1 = FUN_001023f8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010240e(param_1);
                    /* try { // try from 00101fdd to 00101fe1 has its CatchHandler @ 00101fe7 */
    uVar3 = FUN_00102424(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00101569(void)

{
  size_t sVar1;
  char *__src;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d52(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(local_88 + sVar1,__src,99 - sVar1);
  }
  local_b8[0] = 0;
                    /* try { // try from 0010168c to 0010170d has its CatchHandler @ 00101765 */
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 1;
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 2;
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  FUN_00101d92(local_b8,local_e8);
                    /* try { // try from 00101718 to 0010171c has its CatchHandler @ 0010174d */
  FUN_00103d77(local_b8);
  FUN_00101d72(local_b8);
  FUN_00101d72(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d32(undefined8 param_1)

{
  FUN_00101dbc(param_1);
  return;
}




undefined8 FUN_0010341c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c66(param_1,param_2);
  return param_1;
}




void FUN_0010405f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102680(undefined8 param_1)

{
  return param_1;
}




void FUN_001041e1(undefined4 param_1)

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




undefined8 FUN_00103766(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bf8(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c90(void)

{
  return;
}




void FUN_00103938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010265c(param_3);
  uVar1 = FUN_0010266e(param_4);
  FUN_001021be(local_38,uVar1);
  FUN_00102680(param_5);
  uVar1 = FUN_00101c24(0x10,param_2);
                    /* try { // try from 001039c0 to 001039c4 has its CatchHandler @ 001039c7 */
  FUN_00103a7a(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102dae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103620(param_1);
  FUN_0010365c(uVar1,param_2,1);
  return;
}




long FUN_001030dc(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001042bc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_00101c7a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf("%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102692(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102f6c(param_1);
  uVar2 = FUN_00102680(param_4);
  uVar3 = FUN_0010266e(param_3);
  uVar4 = FUN_0010265c(param_2);
  FUN_00102f98(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001024c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d6a(param_1,param_2);
  FUN_00102dae(param_1,param_2);
  return;
}




undefined8 FUN_001023f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104160(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_0010334c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101c3a(void)

{
  return;
}




undefined8 FUN_00102497(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101d92(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f82(param_1,param_2);
  return;
}




void FUN_00104869(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103de6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  vprintf(param_9,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001045d8(void)

{
  return;
}




void FUN_00104630(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101baa(void)

{
  FUN_00101795();
  FUN_0010197e();
  return;
}




void FUN_001038e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103a62(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103b2a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103bdc(param_2);
  puVar2 = (undefined4 *)FUN_00102f30(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102162(undefined8 *param_1)

{
  FUN_001025b0(*param_1);
  return;
}




void FUN_00102bf8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102488(void)

{
  return;
}




void FUN_001025b0(long param_1)

{
  FUN_00102ebc(param_1 + 0x20);
  return;
}




ulong FUN_00104453(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041b6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001037fe(undefined8 param_1)

{
  FUN_00103a16(param_1);
  return;
}




undefined8 FUN_00102cc2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102de8(param_1);
  uVar2 = FUN_0010345e(param_2);
  uVar1 = FUN_00103474(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001032ee(param_1);
  uVar2 = FUN_001035e3(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001030dc(param_1);
  uVar2 = FUN_00103601(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001025a2(void)

{
  return;
}




void FUN_00104580(void)

{
  return;
}




void FUN_00104604(void)

{
  return;
}




void FUN_0010197e(void)

{
  size_t sVar1;
  char *__src;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d52(local_e8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  sVar1 = strlen(local_88);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(local_88 + sVar1,__src,99 - sVar1);
  }
  local_b8[0] = 0;
                    /* try { // try from 00101aa1 to 00101b22 has its CatchHandler @ 00101b7a */
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 1;
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  local_b8[0] = 2;
  puVar2 = (undefined8 *)FUN_00101e56(local_e8,local_b8);
  *puVar2 = local_88;
  FUN_00101d92(local_b8,local_e8);
                    /* try { // try from 00101b2d to 00101b31 has its CatchHandler @ 00101b62 */
  FUN_00103ff0(local_b8);
  FUN_00101d72(local_b8);
  FUN_00101d72(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020ce(undefined8 param_1,undefined8 param_2)

{
  FUN_00102502(param_1,param_2);
  return;
}




bool FUN_00104734(pthread_t *param_1)

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




void FUN_001037b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103a03(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103753(param_3);
  param_1[1] = *puVar1;
  return;
}




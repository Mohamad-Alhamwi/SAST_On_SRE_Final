
void FUN_00101e00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103ed6(void)

{
  return;
}




void FUN_00103f39(void)

{
  return;
}




void FUN_001020e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001029c8(param_1);
  uVar2 = FUN_00101c98(param_1);
  FUN_001029de(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00102f84(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103333(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103a35(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102260(undefined8 param_1)

{
  return param_1;
}




void FUN_001020a4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010294a(param_1,param_2);
  FUN_0010298e(param_1,param_2);
  return;
}




undefined8 FUN_00101804(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101c0e(void)

{
  return;
}




void FUN_00103c19(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104155(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104230(void)

{
  return;
}




undefined8 FUN_00102b10(undefined8 param_1)

{
  return param_1;
}




void FUN_001018b2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101b62(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101f68(param_1,param_2);
  lVar1 = FUN_00101fd8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00101fee(param_1);
                    /* try { // try from 00101bbd to 00101bc1 has its CatchHandler @ 00101bc7 */
    uVar3 = FUN_00102004(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_00101a36(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101cae(param_1,param_2);
  local_28 = FUN_00101cd8(param_1);
  cVar2 = FUN_00101cf6(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d1c(param_1);
    uVar3 = FUN_00101d42(&local_38);
    cVar2 = FUN_00101d64(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101ad6;
    }
  }
  bVar1 = true;
LAB_00101ad6:
  if (bVar1) {
    uVar3 = FUN_00101d8b(param_2);
    FUN_00101dc8(local_30,uVar3);
    FUN_00101e00(&local_28,&local_38);
    local_38 = FUN_00101e22(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d42(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103e5c(void)

{
  return 1;
}




void FUN_00103b65(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00103d7d(long param_1,ulong param_2,long param_3)

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




void FUN_00103eaa(void)

{
  return;
}




void FUN_00104174(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_001035e3(undefined8 param_1)

{
  return param_1;
}




void FUN_00101972(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b62(param_1,param_2);
  return;
}




undefined8 FUN_00103346(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027d8(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ee1(void)

{
  return;
}




void FUN_00101c2e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102077(local_28);
    FUN_00101c2e(param_1,uVar1);
    lVar2 = FUN_0010208d(local_28);
    FUN_001020a4(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001041c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103f5a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ae0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001021b2(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103c79(long param_1,ulong param_2,long param_3)

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




void FUN_001027d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_00102132(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027d8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103817(undefined8 param_1)

{
  FUN_00102af2(param_1);
  return;
}




long FUN_001029c8(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001035f6(undefined8 param_1)

{
  return param_1;
}




void FUN_001019d8(undefined8 param_1)

{
  FUN_00101c1e(param_1);
  return;
}




void FUN_00102cd2(undefined8 param_1)

{
  FUN_0010269b(param_1);
  return;
}




void FUN_001039af(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102fe6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103eec(void)

{
  return;
}




void FUN_00102884(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103905(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101a36(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 5;
    FUN_00103a5f(*local_18);
    free(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102272(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b4c(param_1);
  uVar2 = FUN_00102260(param_4);
  uVar3 = FUN_0010224e(param_3);
  uVar4 = FUN_0010223c(param_2);
  FUN_00102b78(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00101cf6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103f0d(void)

{
  return;
}




void FUN_00102068(void)

{
  return;
}




undefined8 FUN_00102ffc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102846(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102077(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101804(0x30,param_2);
  uVar1 = FUN_00102260(param_5);
  uVar2 = FUN_0010224e(param_4);
  uVar3 = FUN_0010223c(param_3);
  uVar4 = FUN_00102190(param_2);
  uVar5 = FUN_00103200(param_1);
                    /* try { // try from 00102c07 to 00102c0b has its CatchHandler @ 00102c0e */
  FUN_001032c3(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102190(long param_1)

{
  FUN_00102a9c(param_1 + 0x20);
  return;
}




void FUN_00103f02(void)

{
  return;
}




void FUN_0010199c(long param_1)

{
  FUN_00101bee(param_1);
  FUN_00101c0e(param_1);
  FUN_00101888(param_1 + 8);
  return;
}




void FUN_001019f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c98(param_1);
  FUN_00101c2e(param_1,uVar1);
  FUN_001018f2(param_1);
  return;
}




void FUN_00101d9e(undefined8 param_1,undefined8 param_2)

{
  FUN_001021fc(param_1,param_2);
  return;
}




undefined8 FUN_00103476(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8
FUN_00101e22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102260(param_5);
  uVar2 = FUN_0010224e(param_4);
  uVar3 = FUN_0010223c(param_3);
  local_40 = FUN_00102272(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101e9e to 00101ee1 has its CatchHandler @ 00101f1f */
  uVar1 = FUN_0010269b(local_40);
  local_38 = FUN_001022f2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020a4(param_1,local_40);
    FUN_001027d8(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001026ee(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102af2(undefined8 param_1)

{
  FUN_00103280(param_1);
  return;
}




long FUN_0010185a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00103333(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ecb(void)

{
  return;
}




void FUN_00103b8d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103ef7(void)

{
  return;
}




void FUN_00101888(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018b2(param_1);
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




void FUN_00103212(undefined8 param_1,undefined8 param_2)

{
  FUN_0010348c(param_1,param_2);
  return;
}




void FUN_001018f2(undefined8 param_1)

{
  FUN_001019d8(param_1);
  return;
}




undefined8 * FUN_00102f2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010224e(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001022f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102c56(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001029c8(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102cd2(local_50);
    cVar2 = FUN_00101d64(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102cd2(local_50);
      cVar2 = FUN_00101d64(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102f84(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102cbc(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102cbc(local_60);
          local_48[1] = 0;
          FUN_00102cf0(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102f58(local_48);
          uVar6 = FUN_00102cd2(*puVar5);
          cVar2 = FUN_00101d64(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d30(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102077(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102cf0(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102ee4(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102ece(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102ece(local_60);
        uVar6 = FUN_00102ece(local_60);
        FUN_00102ee4(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f2c(local_48);
        uVar6 = FUN_00102cd2(*puVar5);
        cVar2 = FUN_00101d64(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d30(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102077(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102cf0(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102ee4(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102680;
  }
  lVar3 = FUN_00102ca6(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102394:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102cbc(local_60);
    uVar6 = FUN_00102cd2(*puVar5);
    cVar2 = FUN_00101d64(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102394;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102cbc(local_60);
    local_48[1] = 0;
    FUN_00102cf0(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d30(local_60,param_3);
  }
LAB_00102680:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103989(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined4 FUN_00101d1c(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102182(param_1);
  return unaff_EBX;
}




void FUN_001031e1(undefined8 param_1)

{
  FUN_0010185a(param_1);
  return;
}




void FUN_001039e1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104193(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103f4f(void)

{
  return;
}




void FUN_00102182(void)

{
  return;
}




void FUN_00103e9f(void)

{
  return;
}




void FUN_00103888(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  local_18 = (undefined8 *)FUN_00101a36(param_1,&local_1c);
  local_18 = (undefined8 *)*local_18;
  *local_18 = 5;
  FUN_00103a5f(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010181a(void)

{
  return;
}




void FUN_0010348c(void)

{
  return;
}




void FUN_00102cf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103333(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001036ab(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bee(undefined8 param_1)

{
  FUN_00102068(param_1);
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
  FUN_00101932(local_88);
  pvVar1 = calloc(1,8);
  local_58[0] = 0;
                    /* try { // try from 0010156a to 001015d3 has its CatchHandler @ 0010161f */
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101972(local_58,local_88);
                    /* try { // try from 001015db to 001015df has its CatchHandler @ 0010160a */
  FUN_00103888(local_58);
  FUN_00101952(local_58);
  FUN_00101952(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010302a(void)

{
  return;
}




undefined8 FUN_00101c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ec0(void)

{
  return;
}




void FUN_001021c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b2(param_2);
  FUN_00102aba(param_1,uVar1);
  return;
}




undefined8 FUN_00101fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101d8b(undefined8 param_1)

{
  return param_1;
}




long FUN_00102cbc(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103b0b(undefined4 param_1)

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




void FUN_0010294a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102190(param_2);
  uVar2 = FUN_00103200(param_1);
  FUN_00103212(uVar2,uVar1);
  return;
}




int FUN_00103e7a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101932(undefined8 param_1)

{
  FUN_00101912(param_1);
  return;
}




undefined8 FUN_0010179f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103989("Calling good()...");
  FUN_0010178f();
  FUN_00103989("Finished good()");
  FUN_00103989("Calling bad()...");
  FUN_00101509();
  FUN_00103989("Finished bad()");
  return 0;
}




undefined8 FUN_00102d30(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101c98(param_1);
  local_50 = FUN_001029c8(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010269b(local_58);
    local_59 = FUN_00101d64(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102077(local_58);
    }
    else {
      local_58 = FUN_0010208d(local_58);
    }
  }
  FUN_001027d8(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103346(param_1);
    cVar1 = FUN_00101cf6(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103396(local_38,&local_58,&local_50);
      goto LAB_00102eb2;
    }
    FUN_00102f2c(&local_48);
  }
  uVar2 = FUN_00102cd2(local_48);
  cVar1 = FUN_00101d64(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102f84(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103396(local_38,&local_58,&local_50);
  }
LAB_00102eb2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102004(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102884(local_18,param_1);
  FUN_001028a2(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010365a(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010370a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e94(void)

{
  return;
}




undefined8 FUN_001040dc(undefined8 *param_1)

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




void FUN_001031c3(undefined8 param_1)

{
  FUN_0010182d(param_1);
  return;
}




void FUN_00102a9c(undefined8 param_1)

{
  FUN_0010326e(param_1);
  return;
}




void FUN_00103295(undefined8 param_1,undefined8 param_2)

{
  FUN_001034c8(param_1,param_2,0);
  return;
}




void FUN_0010269b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102fc4(param_1);
  FUN_00102fe6(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010303e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101d42(undefined8 *param_1)

{
  FUN_00102190(*param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00101912(undefined8 param_1)

{
  FUN_0010199c(param_1);
  return;
}




undefined8 FUN_0010208d(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001034a0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_00102ece(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103bb8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 * FUN_00102f58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103eb5(void)

{
  return;
}




undefined8 FUN_00103f91(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f5a,local_18);
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




long FUN_00103054(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001033fc(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103460(param_2);
                    /* try { // try from 001030c3 to 00103155 has its CatchHandler @ 00103181 */
    uVar2 = FUN_00103054(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103476(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001033fc(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103460(local_38);
      uVar2 = FUN_00103054(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103476(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103a8a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001037bc(undefined8 param_1)

{
  FUN_00103817(param_1);
  return;
}




undefined8 FUN_00102c56(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027d8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c1e(void)

{
  return;
}




void FUN_00103836(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036ab(param_3);
  puVar3 = (undefined8 *)FUN_00101804(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102870(void)

{
  return;
}




void FUN_0010323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034a0(param_1,param_2,param_3);
  return;
}




void FUN_00103608(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036ab(param_2);
  FUN_001036be(uVar1,uVar2);
  return;
}




undefined8 FUN_001029de(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010269b(local_38);
    cVar1 = FUN_00101d64(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102077(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010208d(local_38);
    }
  }
  FUN_001027d8(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103a09(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined4 * FUN_001033fc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102fc4(param_2);
  puVar2 = (undefined4 *)FUN_00103608(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_0010370a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001037bc(param_2);
  puVar2 = (undefined4 *)FUN_00102b10(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001021fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102af2(param_2);
  uVar1 = FUN_00102b10(uVar1);
  FUN_00102b22(param_1,uVar1);
  return;
}




undefined4 FUN_00101d64(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102b4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103200(param_1);
  FUN_00103295(uVar1,1);
  return;
}




void FUN_00103a5f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102ca6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8
FUN_001026ee(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001029c8(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102cd2(param_3);
      uVar5 = FUN_0010269b(param_4);
      cVar1 = FUN_00101d64(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102772;
      }
    }
  }
  bVar2 = true;
LAB_00102772:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001027d8(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102aba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b2(param_2);
  FUN_00102b22(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101952(undefined8 param_1)

{
  FUN_001019f8(param_1);
  return;
}




undefined8 FUN_00103e6b(void)

{
  return 0;
}




void FUN_00101cd8(undefined8 param_1)

{
  FUN_00102132(param_1);
  return;
}




void FUN_001034c8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103642(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00103f18(void)

{
  return;
}




undefined8 FUN_001036be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b4c(param_1);
  uVar2 = FUN_001036ab(param_2);
  FUN_0010374e(param_1,uVar1,uVar2);
  return uVar1;
}




undefined8 FUN_00101dc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b2(param_2);
  FUN_001021c4(param_1,uVar1);
  return param_1;
}




undefined8 FUN_001040b9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001037da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036ab(param_3);
  FUN_00103836(param_1,param_2,uVar1);
  return;
}




void FUN_00103ab5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00101fee(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010164c(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101932(local_88);
  pvVar1 = calloc(1,8);
  local_58[0] = 0;
                    /* try { // try from 001016ad to 00101716 has its CatchHandler @ 00101762 */
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a36(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101972(local_58,local_88);
                    /* try { // try from 0010171e to 00101722 has its CatchHandler @ 0010174d */
  FUN_00103905(local_58);
  FUN_00101952(local_58);
  FUN_00101952(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010298e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103200(param_1);
  FUN_0010323c(uVar1,param_2,1);
  return;
}




void FUN_00103f44(void)

{
  return;
}




void FUN_00103518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010223c(param_3);
  uVar1 = FUN_0010224e(param_4);
  FUN_00101d9e(local_38,uVar1);
  FUN_00102260(param_5);
  uVar1 = FUN_00101804(0x10,param_2);
                    /* try { // try from 001035a0 to 001035a4 has its CatchHandler @ 001035a7 */
  FUN_0010365a(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032c3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102260(param_5);
  uVar2 = FUN_0010224e(param_4);
  uVar3 = FUN_0010223c(param_3);
  FUN_00103518(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103200(undefined8 param_1)

{
  return param_1;
}




void FUN_00103be6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001028a2(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001029c8(param_1);
  uVar2 = FUN_0010303e(param_2);
  uVar1 = FUN_00103054(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102ece(param_1);
  uVar2 = FUN_001031c3(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102cbc(param_1);
  uVar2 = FUN_001031e1(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00103280(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102b22(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021b2(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102846(undefined8 param_1,undefined8 param_2)

{
  FUN_0010302a(param_1,param_2);
  return;
}




void FUN_00101f68(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027f6(param_1,param_2);
  FUN_00102870(param_1,param_2);
  FUN_00101888(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_0010405e(pthread_t *param_1)

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




void FUN_00102fc4(long param_1)

{
  FUN_001033de(param_1 + 0x20);
  return;
}




undefined8 FUN_00103642(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_0010326e(undefined8 param_1)

{
  return param_1;
}




void FUN_001033de(undefined8 param_1)

{
  FUN_001035f6(param_1);
  return;
}




void FUN_00101cae(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e2(param_1,param_2);
  return;
}




void FUN_00103f2e(void)

{
  return;
}




void FUN_0010374e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101804(0x30,param_2);
  uVar1 = FUN_001036ab(param_3);
  uVar2 = FUN_00102190(param_2);
  uVar3 = FUN_00103200(param_1);
  FUN_001037da(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103396(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001035e3(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103333(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010223c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010178f(void)

{
  FUN_0010164c();
  return;
}




undefined8 FUN_001027f6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ffc(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102ee4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103333(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103333(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f23(void)

{
  return;
}




long FUN_0010182d(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}





undefined8
FUN_00101f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001023d2(param_5);
  uVar2 = FUN_001023c0(param_4);
  uVar3 = FUN_001023ae(param_3);
  local_40 = FUN_001023e4(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102010 to 00102053 has its CatchHandler @ 00102091 */
  uVar1 = FUN_0010280d(local_40);
  local_38 = FUN_00102464(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102216(param_1,local_40);
    FUN_0010294a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102860(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104180(void)

{
  return;
}




void FUN_001041e3(void)

{
  return;
}




undefined8 FUN_001022a4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010294a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103136(long param_1)

{
  FUN_00103550(param_1 + 0x20);
  return;
}




void FUN_00103cdf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001023e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102cbe(param_1);
  uVar2 = FUN_001023d2(param_4);
  uVar3 = FUN_001023c0(param_3);
  uVar4 = FUN_001023ae(param_2);
  FUN_00102cea(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00102254(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b3a(param_1);
  uVar2 = FUN_00101e0a(param_1);
  FUN_00102b50(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_0010198d(void)

{
  return;
}




void FUN_00101d90(void)

{
  return;
}




void FUN_00103ec3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001043ff(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001044e0(void)

{
  return;
}




void FUN_00101a64(undefined8 param_1)

{
  FUN_00101b4a(param_1);
  return;
}




void FUN_00102c94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102324(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101d60(undefined8 param_1)

{
  FUN_001021da(param_1);
  return;
}




void FUN_00101cd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001020da(param_1,param_2);
  lVar1 = FUN_0010214a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102160(param_1);
                    /* try { // try from 00101d2f to 00101d33 has its CatchHandler @ 00101d39 */
    uVar3 = FUN_00102176(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00104106(void)

{
  return 1;
}




void FUN_00103e0f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00104027(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104154(void)

{
  return;
}




void FUN_0010441e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103768(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b0e(long param_1)

{
  FUN_00101d60(param_1);
  FUN_00101d80(param_1);
  FUN_001019fa(param_1 + 8);
  return;
}




void FUN_00103508(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103755(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034a5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010418b(void)

{
  return;
}




undefined8 FUN_00101e0a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104470(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104204(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103d8a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102336(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102324(param_2);
  FUN_00102c2c(param_1,uVar1);
  return;
}




ulong FUN_00103f23(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010316e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001014e9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aa4(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 0010157f to 001015e2 has its CatchHandler @ 0010162e */
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  FUN_00101ae4(local_58,local_88);
                    /* try { // try from 001015ea to 001015ee has its CatchHandler @ 00101619 */
  FUN_001039ed(local_58);
  FUN_00101ac4(local_58);
  FUN_00101ac4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022f4(void)

{
  return;
}




void FUN_001039a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0010381d(param_3);
  puVar2 = (undefined8 *)FUN_00101977(8,param_2);
  *puVar2 = *puVar1;
  return;
}




undefined8 FUN_00102b50(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010280d(local_38);
    cVar1 = FUN_00101ed6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001021e9(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001021ff(local_38);
    }
  }
  FUN_0010294a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010377a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010381d(param_2);
  FUN_00103830(uVar1,uVar2);
  return;
}




void FUN_00101b6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e0a(param_1);
  FUN_00101da0(param_1,uVar1);
  FUN_00101a64(param_1);
  return;
}




void FUN_00102e62(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001034a5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103c59(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_0010316e(undefined8 param_1,undefined8 param_2)

{
  FUN_001029b8(param_1,param_2);
  return param_1;
}




void FUN_00104196(void)

{
  return;
}




undefined8 FUN_00102a14(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b3a(param_1);
  uVar2 = FUN_001031b0(param_2);
  uVar1 = FUN_001031c6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103040(param_1);
  uVar2 = FUN_00103335(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e2e(param_1);
  uVar2 = FUN_00103353(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103b6b(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101ba8(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00103c33("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c8b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102dc8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b3a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e44(local_50);
    cVar2 = FUN_00101ed6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e44(local_50);
      cVar2 = FUN_00101ed6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001030f6(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e2e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e2e(local_60);
          local_48[1] = 0;
          FUN_00102e62(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001030ca(local_48);
          uVar6 = FUN_00102e44(*puVar5);
          cVar2 = FUN_00101ed6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102ea2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001021e9(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102e62(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103056(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103040(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103040(local_60);
        uVar6 = FUN_00103040(local_60);
        FUN_00103056(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010309e(local_48);
        uVar6 = FUN_00102e44(*puVar5);
        cVar2 = FUN_00101ed6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102ea2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001021e9(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102e62(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103056(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001027f2;
  }
  lVar3 = FUN_00102e18(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102506:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e2e(local_60);
    uVar6 = FUN_00102e44(*puVar5);
    cVar2 = FUN_00101ed6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102506;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e2e(local_60);
    local_48[1] = 0;
    FUN_00102e62(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102ea2(local_60,param_3);
  }
LAB_001027f2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined4 FUN_00101e8e(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001022f4(param_1);
  return unaff_EBX;
}




void FUN_001041b7(void)

{
  return;
}




undefined8 FUN_001021e9(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010319c(void)

{
  return;
}




undefined8 FUN_001021ff(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102dc8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010294a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102324(undefined8 param_1)

{
  return param_1;
}




void FUN_001041ac(void)

{
  return;
}




void FUN_00101b4a(undefined8 param_1)

{
  FUN_00101d90(param_1);
  return;
}




long FUN_00101ba8(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e20(param_1,param_2);
  local_28 = FUN_00101e4a(param_1);
  cVar2 = FUN_00101e68(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101e8e(param_1);
    uVar3 = FUN_00101eb4(&local_38);
    cVar2 = FUN_00101ed6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c48;
    }
  }
  bVar1 = true;
LAB_00101c48:
  if (bVar1) {
    uVar3 = FUN_00101efd(param_2);
    FUN_00101f3a(local_30,uVar3);
    FUN_00101f72(&local_28,&local_38);
    local_38 = FUN_00101f94(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101eb4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




undefined8 FUN_00101f3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102324(param_2);
  FUN_00102336(param_1,uVar1);
  return param_1;
}




void FUN_001035fe(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ee0)();
  return;
}




void FUN_001020da(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102968(param_1,param_2);
  FUN_001029e2(param_1,param_2);
  FUN_001019fa(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c82(undefined8 param_1)

{
  return param_1;
}




void FUN_001019fa(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a24(param_1);
  return;
}




undefined8 FUN_001034b8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010294a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104175(void)

{
  return;
}




void FUN_00103e37(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001041a1(void)

{
  return;
}




void FUN_00101a24(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010165b(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aa4(local_88);
  local_58[0] = 0;
                    /* try { // try from 001016af to 00101712 has its CatchHandler @ 0010175e */
  puVar1 = (undefined4 *)FUN_00101ba8(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101ba8(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101ba8(local_88,local_58);
  *puVar1 = 7;
  FUN_00101ae4(local_58,local_88);
                    /* try { // try from 0010171a to 0010171e has its CatchHandler @ 00101749 */
  FUN_00103aac(local_58);
  FUN_00101ac4(local_58);
  FUN_00101ac4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103612(param_1,param_2,param_3);
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  FUN_00101b0e(param_1);
  return;
}




undefined8 * FUN_001030ca(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001023d2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010280d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103136(param_1);
  FUN_00103158(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c33(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101eb4(undefined8 *param_1)

{
  FUN_00102302(*param_1);
  return;
}




undefined8 FUN_00103372(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010443d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001041f9(void)

{
  return;
}




void FUN_00102302(long param_1)

{
  FUN_00102c0e(param_1 + 0x20);
  return;
}




void FUN_00104149(void)

{
  return;
}




void FUN_00103aac(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101ba8(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c8b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103c33("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001019a0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103612(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102ea2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101e0a(param_1);
  local_50 = FUN_00102b3a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010280d(local_58);
    local_59 = FUN_00101ed6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001021e9(local_58);
    }
    else {
      local_58 = FUN_001021ff(local_58);
    }
  }
  FUN_0010294a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001034b8(param_1);
    cVar1 = FUN_00101e68(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103508(local_38,&local_58,&local_50);
      goto LAB_00103024;
    }
    FUN_0010309e(&local_48);
  }
  uVar2 = FUN_00102e44(local_48);
  cVar1 = FUN_00101ed6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001030f6(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103508(local_38,&local_58,&local_50);
  }
LAB_00103024:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cbe(param_1);
  uVar2 = FUN_0010381d(param_2);
  FUN_001038be(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00101d80(void)

{
  return;
}




void FUN_0010178b(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aa4(local_88);
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_58[0] = 0;
                    /* try { // try from 00101821 to 00101884 has its CatchHandler @ 001018d0 */
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 1;
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  local_58[0] = 2;
  puVar4 = (uint *)FUN_00101ba8(local_88,local_58);
  *puVar4 = uVar1;
  FUN_00101ae4(local_58,local_88);
                    /* try { // try from 0010188c to 00101890 has its CatchHandler @ 001018bb */
  FUN_00103b6b(local_58);
  FUN_00101ac4(local_58);
  FUN_00101ac4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001031b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101e20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102254(param_1,param_2);
  return;
}




void FUN_0010416a(void)

{
  return;
}




void FUN_0010236e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c64(param_2);
  uVar1 = FUN_00102c82(uVar1);
  FUN_00102c94(param_1,uVar1);
  return;
}




long FUN_00102160(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00101f10(undefined8 param_1,undefined8 param_2)

{
  FUN_0010236e(param_1,param_2);
  return;
}




void FUN_00102e44(undefined8 param_1)

{
  FUN_0010280d(param_1);
  return;
}




void FUN_00103db5(undefined4 param_1)

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




void FUN_00102b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103372(param_1);
  FUN_001033ae(uVar1,param_2,1);
  return;
}




int FUN_00104124(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101b6a(param_1);
  return;
}




undefined8 FUN_00101977(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00103040(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001021da(void)

{
  return;
}




undefined8 FUN_0010381d(undefined8 param_1)

{
  return param_1;
}




void FUN_0010413e(void)

{
  return;
}




undefined8 FUN_00104386(undefined8 *param_1)

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




void FUN_00103353(undefined8 param_1)

{
  FUN_001019cd(param_1);
  return;
}




void FUN_00102c2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102324(param_2);
  FUN_00102c94(param_1,uVar1);
  return;
}




void FUN_00103435(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001023d2(param_5);
  uVar2 = FUN_001023c0(param_4);
  uVar3 = FUN_001023ae(param_3);
  FUN_0010368a(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8
FUN_00102860(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b3a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e44(param_3);
      uVar5 = FUN_0010280d(param_4);
      cVar1 = FUN_00101ed6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001028e4;
      }
    }
  }
  bVar2 = true;
LAB_001028e4:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010294a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_001031c6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010356e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001035d2(param_2);
                    /* try { // try from 00103235 to 001032c7 has its CatchHandler @ 001032f3 */
    uVar2 = FUN_001031c6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001035e8(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010356e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001035d2(local_38);
      uVar2 = FUN_001031c6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001035e8(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined4 FUN_00101ed6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101aa4(undefined8 param_1)

{
  FUN_00101a84(param_1);
  return;
}




void FUN_00102216(undefined8 param_1,undefined8 param_2)

{
  FUN_00102abc(param_1,param_2);
  FUN_00102b00(param_1,param_2);
  return;
}




void FUN_0010363a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001037b4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_001035e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103056(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034a5(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034a5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103e62(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001030f6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034a5(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010415f(void)

{
  return;
}




undefined8 FUN_0010423b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104204,local_18);
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




void FUN_00103335(undefined8 param_1)

{
  FUN_001019a0(param_1);
  return;
}




void FUN_00103d34(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010394a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010381d(param_3);
  FUN_001039a6(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101da0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001021e9(local_28);
    FUN_00101da0(param_1,uVar1);
    lVar2 = FUN_001021ff(local_28);
    FUN_00102216(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001039ed(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00101ba8(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00103c8b(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00103c33("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001033e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001037b4(void)

{
  return 0x333333333333333;
}




void FUN_00102c0e(undefined8 param_1)

{
  FUN_001033e0(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103cb3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001035d2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001038be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101977(0x28,param_2);
  uVar1 = FUN_0010381d(param_3);
  uVar2 = FUN_00102302(param_2);
  uVar3 = FUN_00103372(param_1);
  FUN_0010394a(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001023ae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101efd(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101977(0x28,param_2);
  uVar1 = FUN_001023d2(param_5);
  uVar2 = FUN_001023c0(param_4);
  uVar3 = FUN_001023ae(param_3);
  uVar4 = FUN_00102302(param_2);
  uVar5 = FUN_00103372(param_1);
                    /* try { // try from 00102d79 to 00102d7d has its CatchHandler @ 00102d80 */
  FUN_00103435(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103d09(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102e2e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010294a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c64(undefined8 param_1)

{
  FUN_001033f2(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101430();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00101ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101cd4(param_1,param_2);
  return;
}




undefined8 FUN_00104115(void)

{
  return 0;
}




undefined8 FUN_00101e68(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010368a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023ae(param_3);
  uVar1 = FUN_001023c0(param_4);
  FUN_00101f10(local_38,uVar1);
  FUN_001023d2(param_5);
  uVar1 = FUN_00101977(8,param_2);
                    /* try { // try from 00103712 to 00103716 has its CatchHandler @ 00103719 */
  FUN_001037cc(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001041c2(void)

{
  return;
}




void FUN_0010387c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010392c(param_2);
  puVar2 = (undefined4 *)FUN_00102c82(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00101f72(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00104363(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103987(undefined8 param_1)

{
  FUN_00102c64(param_1);
  return;
}




void FUN_00103d5f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102176(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029f6(local_18,param_1);
  FUN_00102a14(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018fd(void)

{
  FUN_0010165b();
  FUN_0010178b();
  return;
}




long FUN_00102b3a(long param_1)

{
  return param_1 + 8;
}




void FUN_001041ee(void)

{
  return;
}




undefined8 FUN_00103755(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034a5(undefined8 param_1)

{
  return param_1;
}




void FUN_00103384(undefined8 param_1,undefined8 param_2)

{
  FUN_001035fe(param_1,param_2);
  return;
}




void FUN_00103e90(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102abc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102302(param_2);
  uVar2 = FUN_00103372(param_1);
  FUN_00103384(uVar2,uVar1);
  return;
}




void FUN_00103407(undefined8 param_1,undefined8 param_2)

{
  FUN_0010363a(param_1,param_2,0);
  return;
}




void FUN_00102cbe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103372(param_1);
  FUN_00103407(uVar1,1);
  return;
}




void FUN_001029e2(void)

{
  return;
}




undefined8 FUN_0010214a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




bool FUN_00104308(pthread_t *param_1)

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




undefined8 FUN_00103158(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001037cc(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010387c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001033f2(undefined8 *param_1)

{
  return *param_1;
}




undefined4 * FUN_0010356e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103136(param_2);
  puVar2 = (undefined4 *)FUN_0010377a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00101e4a(undefined8 param_1)

{
  FUN_001022a4(param_1);
  return;
}




void FUN_001041d8(void)

{
  return;
}




void FUN_0010392c(undefined8 param_1)

{
  FUN_00103987(param_1);
  return;
}




void FUN_00103550(undefined8 param_1)

{
  FUN_00103768(param_1);
  return;
}




undefined8 FUN_001023c0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101912(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103c33("Calling good()...");
  FUN_001018fd();
  FUN_00103c33("Finished good()");
  FUN_00103c33("Calling bad()...");
  FUN_001014e9();
  FUN_00103c33("Finished bad()");
  return 0;
}




void FUN_001029b8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010319c(param_1,param_2);
  return;
}




undefined8 * FUN_0010309e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001041cd(void)

{
  return;
}




long FUN_001019cd(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




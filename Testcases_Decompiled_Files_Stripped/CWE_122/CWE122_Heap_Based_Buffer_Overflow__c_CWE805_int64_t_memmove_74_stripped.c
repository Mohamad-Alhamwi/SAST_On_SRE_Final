
void FUN_00101c6c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020b5(local_28);
    FUN_00101c6c(param_1,uVar1);
    lVar2 = FUN_001020cb(local_28);
    FUN_001020e2(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




ulong FUN_00103d34(long param_1,ulong param_2,long param_3)

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




void FUN_00103f7b(void)

{
  return;
}




undefined8 FUN_00101e06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f0(param_2);
  FUN_00102202(param_1,uVar1);
  return param_1;
}




void FUN_00102bb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101842(0x30,param_2);
  uVar1 = FUN_0010229e(param_5);
  uVar2 = FUN_0010228c(param_4);
  uVar3 = FUN_0010227a(param_3);
  uVar4 = FUN_001021ce(param_2);
  uVar5 = FUN_0010323e(param_1);
                    /* try { // try from 00102c45 to 00102c49 has its CatchHandler @ 00102c4c */
  FUN_00103301(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010378c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101842(0x30,param_2);
  uVar1 = FUN_001036e9(param_3);
  uVar2 = FUN_001021ce(param_2);
  uVar3 = FUN_0010323e(param_1);
  FUN_00103818(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001020cb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101ddc(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223a(param_1,param_2);
  return;
}




void FUN_00103ac4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101930(undefined8 param_1)

{
  FUN_00101a16(param_1);
  return;
}




void FUN_00103fd3(void)

{
  return;
}




void FUN_00103fff(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102884(undefined8 param_1,undefined8 param_2)

{
  FUN_00103068(param_1,param_2);
  return;
}




void FUN_0010424e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001018c6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018f0(param_1);
  return;
}




long FUN_00101898(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103b45(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103985(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_344;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_344 = 2;
  local_340 = (undefined8 *)FUN_00101a74(param_1,&local_344);
  local_340 = (undefined8 *)*local_340;
  puVar2 = local_338;
  for (lVar1 = 100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
  }
  memmove(local_340,local_338,800);
  FUN_00103b45(*local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b1a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c48(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103fde(void)

{
  return;
}




undefined8 FUN_00103371(undefined8 param_1)

{
  return param_1;
}




void FUN_0010400a(void)

{
  return;
}




undefined8 FUN_00104174(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001017dd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a44("Calling good()...");
  FUN_001017cd();
  FUN_00103a44("Finished good()");
  FUN_00103a44("Calling bad()...");
  FUN_00101529();
  FUN_00103a44("Finished bad()");
  return 0;
}




long FUN_00103092(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010343a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010349e(param_2);
                    /* try { // try from 00103101 to 00103193 has its CatchHandler @ 001031bf */
    uVar2 = FUN_00103092(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034b4(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010343a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010349e(local_38);
      uVar2 = FUN_00103092(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034b4(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




ulong FUN_00103e38(long param_1,ulong param_2,long param_3)

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




void FUN_00101970(undefined8 param_1)

{
  FUN_00101950(param_1);
  return;
}




void FUN_00103ff4(void)

{
  return;
}




void FUN_00103f9c(void)

{
  return;
}




void FUN_00103874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036e9(param_3);
  puVar3 = (undefined8 *)FUN_00101842(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00102016(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103af0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001021ce(long param_1)

{
  FUN_00102ada(param_1 + 0x20);
  return;
}




void FUN_00101e3e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103621(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102c94(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a06(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d10(local_50);
    cVar2 = FUN_00101da2(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d10(local_50);
      cVar2 = FUN_00101da2(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fc2(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102cfa(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102cfa(local_60);
          local_48[1] = 0;
          FUN_00102d2e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102f96(local_48);
          uVar6 = FUN_00102d10(*puVar5);
          cVar2 = FUN_00101da2(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d6e(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020b5(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d2e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f22(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f0c(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f0c(local_60);
        uVar6 = FUN_00102f0c(local_60);
        FUN_00102f22(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f6a(local_48);
        uVar6 = FUN_00102d10(*puVar5);
        cVar2 = FUN_00101da2(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d6e(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020b5(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d2e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f22(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026be;
  }
  lVar3 = FUN_00102ce4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023d2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102cfa(local_60);
    uVar6 = FUN_00102d10(*puVar5);
    cVar2 = FUN_00101da2(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023d2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102cfa(local_60);
    local_48[1] = 0;
    FUN_00102d2e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d6e(local_60,param_3);
  }
LAB_001026be:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00103384(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102816(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101858(void)

{
  return;
}




undefined8 FUN_00102a1c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026d9(local_38);
    cVar1 = FUN_00101da2(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020b5(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020cb(local_38);
    }
  }
  FUN_00102816(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001036e9(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00103f17(void)

{
  return 1;
}




undefined8 FUN_0010227a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103680(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001020e2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102988(param_1,param_2);
  FUN_001029cc(param_1,param_2);
  return;
}




void FUN_00101a16(undefined8 param_1)

{
  FUN_00101c5c(param_1);
  return;
}




void FUN_00103f4f(void)

{
  return;
}




void FUN_00101d80(undefined8 *param_1)

{
  FUN_001021ce(*param_1);
  return;
}




long FUN_00102cfa(long param_1)

{
  return param_1 + 0x20;
}




undefined4 FUN_00101da2(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_001028e0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a06(param_1);
  uVar2 = FUN_0010307c(param_2);
  uVar1 = FUN_00103092(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f0c(param_1);
  uVar2 = FUN_00103201(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102cfa(param_1);
  uVar2 = FUN_0010321f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00101fa6(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102834(param_1,param_2);
  FUN_001028ae(param_1,param_2);
  FUN_001018c6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103f35(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101842(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_0010186b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_0010327a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034de(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101cd6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102834(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010303a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010404c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104015,local_18);
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




undefined8 FUN_0010307c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103cd4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103a44(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103f26(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




undefined8 * FUN_00102f96(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
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




void FUN_00102b60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f0(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001020b5(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001042f0(void)

{
  return;
}




void FUN_00102120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a06(param_1);
  uVar2 = FUN_00101cd6(param_1);
  FUN_00102a1c(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00104197(undefined8 *param_1)

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




void FUN_00103698(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103748(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a36(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cd6(param_1);
  FUN_00101c6c(param_1,uVar1);
  FUN_00101930(param_1);
  return;
}




void FUN_0010422f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102f22(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103371(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103371(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001036fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b8a(param_1);
  uVar2 = FUN_001036e9(param_2);
  FUN_0010378c(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103fe9(void)

{
  return;
}




void FUN_00103f91(void)

{
  return;
}




undefined8
FUN_00101e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010229e(param_5);
  uVar2 = FUN_0010228c(param_4);
  uVar3 = FUN_0010227a(param_3);
  local_40 = FUN_001022b0(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101edc to 00101f1f has its CatchHandler @ 00101f5d */
  uVar1 = FUN_001026d9(local_40);
  local_38 = FUN_00102330(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020e2(param_1,local_40);
    FUN_00102816(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010272c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103c20(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103646(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036e9(param_2);
  FUN_001036fc(uVar1,uVar2);
  return;
}




undefined8 FUN_001032ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ada(undefined8 param_1)

{
  FUN_001032ac(param_1);
  return;
}




undefined8 FUN_0010349e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001018f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00102d10(undefined8 param_1)

{
  FUN_001026d9(param_1);
  return;
}




void FUN_00101990(undefined8 param_1)

{
  FUN_00101a36(param_1);
  return;
}




void FUN_00103ca1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




long FUN_0010202c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00101d16(undefined8 param_1)

{
  FUN_00102170(param_1);
  return;
}




void FUN_00101c2c(undefined8 param_1)

{
  FUN_001020a6(param_1);
  return;
}




long FUN_00102a06(long param_1)

{
  return param_1 + 8;
}




void FUN_001038c6(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_344;
  undefined8 *local_340;
  undefined8 local_338 [101];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_344 = 2;
  local_340 = (undefined8 *)FUN_00101a74(param_1,&local_344);
  local_340 = (undefined8 *)*local_340;
  puVar2 = local_338;
  for (lVar1 = 100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
  }
  memmove(local_340,local_338,800);
  FUN_00103b45(*local_340);
  free(local_340);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00104119(pthread_t *param_1)

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




undefined8 FUN_0010229e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b9b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010167b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101970(local_88);
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 001016eb to 00101754 has its CatchHandler @ 001017a0 */
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001019b0(local_58,local_88);
                    /* try { // try from 0010175c to 00101760 has its CatchHandler @ 0010178b */
  FUN_00103985(local_58);
  FUN_00101990(local_58);
  FUN_00101990(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104210(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102af8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f0(param_2);
  FUN_00102b60(param_1,uVar1);
  return;
}




undefined4 FUN_00101d5a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021c0(param_1);
  return unaff_EBX;
}




undefined4 * FUN_0010343a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103002(param_2);
  puVar2 = (undefined4 *)FUN_00103646(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103bc6(undefined4 param_1)

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




void FUN_00103fc8(void)

{
  return;
}




long FUN_00102f0c(long param_1)

{
  return param_1 + 0x18;
}




undefined8
FUN_0010272c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a06(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d10(param_3);
      uVar5 = FUN_001026d9(param_4);
      cVar1 = FUN_00101da2(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027b0;
      }
    }
  }
  bVar2 = true;
LAB_001027b0:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102816(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010303a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102884(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102170(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102816(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d2e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103371(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00101a74(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101cec(param_1,param_2);
  local_28 = FUN_00101d16(param_1);
  cVar2 = FUN_00101d34(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d5a(param_1);
    uVar3 = FUN_00101d80(&local_38);
    cVar2 = FUN_00101da2(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b14;
    }
  }
  bVar1 = true;
LAB_00101b14:
  if (bVar1) {
    uVar3 = FUN_00101dc9(param_2);
    FUN_00101e06(local_30,uVar3);
    FUN_00101e3e(&local_28,&local_38);
    local_38 = FUN_00101e60(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d80(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00101529(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101970(local_88);
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00101599 to 00101602 has its CatchHandler @ 0010164e */
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a74(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001019b0(local_58,local_88);
                    /* try { // try from 0010160a to 0010160e has its CatchHandler @ 00101639 */
  FUN_001038c6(local_58);
  FUN_00101990(local_58);
  FUN_00101990(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101dc9(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032be(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103250(undefined8 param_1,undefined8 param_2)

{
  FUN_001034ca(param_1,param_2);
  return;
}




void FUN_00102b30(undefined8 param_1)

{
  FUN_001032be(param_1);
  return;
}




void FUN_00103a6a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b8a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010323e(param_1);
  FUN_001032d3(uVar1,1);
  return;
}




void FUN_00103c73(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103fa7(void)

{
  return;
}




undefined8 FUN_00102d6e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101cd6(param_1);
  local_50 = FUN_00102a06(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026d9(local_58);
    local_59 = FUN_00101da2(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020b5(local_58);
    }
    else {
      local_58 = FUN_001020cb(local_58);
    }
  }
  FUN_00102816(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103384(param_1);
    cVar1 = FUN_00101d34(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033d4(local_38,&local_58,&local_50);
      goto LAB_00102ef0;
    }
    FUN_00102f6a(&local_48);
  }
  uVar2 = FUN_00102d10(local_48);
  cVar1 = FUN_00101da2(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fc2(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033d4(local_38,&local_58,&local_50);
  }
LAB_00102ef0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036e9(param_3);
  FUN_00103874(param_1,param_2,uVar1);
  return;
}




void FUN_00103506(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103680(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102988(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021ce(param_2);
  uVar2 = FUN_0010323e(param_1);
  FUN_00103250(uVar2,uVar1);
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_001019da(param_1);
  return;
}




undefined8 FUN_00103634(undefined8 param_1)

{
  return param_1;
}




void FUN_0010223a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b30(param_2);
  uVar1 = FUN_00102b4e(uVar1);
  FUN_00102b60(param_1,uVar1);
  return;
}




void FUN_00102fc2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103371(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001033d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103621(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103371(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001026d9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103002(param_1);
  FUN_00103024(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103748(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001037fa(param_2);
  puVar2 = (undefined4 *)FUN_00102b4e(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_0010323e(undefined8 param_1)

{
  return param_1;
}




void FUN_001034ca(void)

{
  return;
}




void FUN_00102042(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028c2(local_18,param_1);
  FUN_001028e0(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ba0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fa6(param_1,param_2);
  lVar1 = FUN_00102016(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010202c(param_1);
                    /* try { // try from 00101bfb to 00101bff has its CatchHandler @ 00101c05 */
    uVar3 = FUN_00102042(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001028c2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001037fa(undefined8 param_1)

{
  FUN_00103855(param_1);
  return;
}




void FUN_001029cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010323e(param_1);
  FUN_0010327a(uVar1,param_2,1);
  return;
}




void FUN_001021c0(void)

{
  return;
}




void FUN_00102816(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103b70(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017cd(void)

{
  FUN_0010167b();
  return;
}




void FUN_001019da(long param_1)

{
  FUN_00101c2c(param_1);
  FUN_00101c4c(param_1);
  FUN_001018c6(param_1 + 8);
  return;
}




void FUN_001032d3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103506(param_1,param_2,0);
  return;
}




void FUN_00103f5a(void)

{
  return;
}




undefined8 FUN_001034b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101c5c(void)

{
  return;
}




void FUN_00103fbd(void)

{
  return;
}




void FUN_00103556(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010227a(param_3);
  uVar1 = FUN_0010228c(param_4);
  FUN_00101ddc(local_38,uVar1);
  FUN_0010229e(param_5);
  uVar1 = FUN_00101842(0x10,param_2);
                    /* try { // try from 001035de to 001035e2 has its CatchHandler @ 001035e5 */
  FUN_00103698(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103855(undefined8 param_1)

{
  FUN_00102b30(param_1);
  return;
}




undefined8 FUN_00101d34(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_001022b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b8a(param_1);
  uVar2 = FUN_0010229e(param_4);
  uVar3 = FUN_0010228c(param_3);
  uVar4 = FUN_0010227a(param_2);
  FUN_00102bb6(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103f86(void)

{
  return;
}




void FUN_00103301(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010229e(param_5);
  uVar2 = FUN_0010228c(param_4);
  uVar3 = FUN_0010227a(param_3);
  FUN_00103556(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103068(void)

{
  return;
}




undefined8 * FUN_00102f6a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103a9c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010228c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103024(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001028ae(void)

{
  return;
}




void FUN_00104280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102202(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021f0(param_2);
  FUN_00102af8(param_1,uVar1);
  return;
}




void FUN_00101cec(undefined8 param_1,undefined8 param_2)

{
  FUN_00102120(param_1,param_2);
  return;
}




void FUN_00103fb2(void)

{
  return;
}




void FUN_00104015(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102c94(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102816(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010341c(undefined8 param_1)

{
  FUN_00103634(param_1);
  return;
}




void FUN_00103002(long param_1)

{
  FUN_0010341c(param_1 + 0x20);
  return;
}




void FUN_0010321f(undefined8 param_1)

{
  FUN_00101898(param_1);
  return;
}




void FUN_001019b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ba0(param_1,param_2);
  return;
}




void FUN_00103f70(void)

{
  return;
}




void FUN_001034de(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103201(undefined8 param_1)

{
  FUN_0010186b(param_1);
  return;
}




void FUN_001020a6(void)

{
  return;
}




undefined8 FUN_001021f0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102b4e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f65(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




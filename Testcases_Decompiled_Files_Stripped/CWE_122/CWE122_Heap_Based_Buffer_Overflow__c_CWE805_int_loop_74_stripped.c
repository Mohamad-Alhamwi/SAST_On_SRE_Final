
void FUN_001021e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d0(param_2);
  FUN_00102ad8(param_1,uVar1);
  return;
}




undefined8 FUN_001041a4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102814(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010301a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001032e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010227e(param_5);
  uVar2 = FUN_0010226c(param_4);
  uVar3 = FUN_0010225a(param_3);
  FUN_00103536(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




int FUN_00103f65(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102aba(undefined8 param_1)

{
  FUN_0010328c(param_1);
  return;
}




void FUN_001027f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101f86(param_1,param_2);
  lVar1 = FUN_00101ff6(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010200c(param_1);
                    /* try { // try from 00101bdb to 00101bdf has its CatchHandler @ 00101be5 */
    uVar3 = FUN_00102022(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00101f86(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102814(param_1,param_2);
  FUN_0010288e(param_1,param_2);
  FUN_001018a6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fe2(void)

{
  return;
}




undefined8 FUN_00101cb6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102fe2(long param_1)

{
  FUN_001033fc(param_1 + 0x20);
  return;
}




void FUN_00101e1e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101de6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d0(param_2);
  FUN_001021e2(param_1,uVar1);
  return param_1;
}




void FUN_00104003(void)

{
  return;
}




void FUN_00103fb6(void)

{
  return;
}




void FUN_00103ff8(void)

{
  return;
}




void FUN_0010403a(void)

{
  return;
}




void FUN_00103a74(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d60(undefined8 *param_1)

{
  FUN_001021ae(*param_1);
  return;
}




undefined8 FUN_001036c9(undefined8 param_1)

{
  return param_1;
}




long FUN_00101878(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001041c7(undefined8 *param_1)

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




long FUN_0010200c(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00101822(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103fa0(void)

{
  return;
}




undefined8 FUN_001028c0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001029e6(param_1);
  uVar2 = FUN_0010305c(param_2);
  uVar1 = FUN_00103072(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102eec(param_1);
  uVar2 = FUN_001031e1(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102cda(param_1);
  uVar2 = FUN_001031ff(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103fed(void)

{
  return;
}




void FUN_00102b6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010321e(param_1);
  FUN_001032b3(uVar1,1);
  return;
}




void FUN_001017ad(void)

{
  FUN_0010165b();
  return;
}




void FUN_00102864(undefined8 param_1,undefined8 param_2)

{
  FUN_00103048(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
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
  FUN_00101950(local_88);
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00101579 to 001015e2 has its CatchHandler @ 0010162e */
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101990(local_58,local_88);
                    /* try { // try from 001015ea to 001015ee has its CatchHandler @ 00101619 */
  FUN_001038a6(local_58);
  FUN_00101970(local_58);
  FUN_00101970(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c78(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00102eec(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103a9a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101da9(undefined8 param_1)

{
  return param_1;
}




void FUN_001031ff(undefined8 param_1)

{
  FUN_00101878(param_1);
  return;
}




ulong FUN_00103e68(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00103364(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027f6(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104240(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long FUN_00102cda(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103d04(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102ad8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d0(param_2);
  FUN_00102b40(param_1,uVar1);
  return;
}




undefined8 FUN_001020ab(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001042b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Type propagation algorithm not settling */

long FUN_00102310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102c74(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001029e6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102cf0(local_50);
    cVar2 = FUN_00101d82(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102cf0(local_50);
      cVar2 = FUN_00101d82(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fa2(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102cda(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102cda(local_60);
          local_48[1] = 0;
          FUN_00102d0e(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102f76(local_48);
          uVar6 = FUN_00102cf0(*puVar5);
          cVar2 = FUN_00101d82(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d4e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102095(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d0e(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f02(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102eec(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102eec(local_60);
        uVar6 = FUN_00102eec(local_60);
        FUN_00102f02(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f4a(local_48);
        uVar6 = FUN_00102cf0(*puVar5);
        cVar2 = FUN_00101d82(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d4e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102095(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d0e(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f02(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010269e;
  }
  lVar3 = FUN_00102cc4(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023b2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102cda(local_60);
    uVar6 = FUN_00102cf0(*puVar5);
    cVar2 = FUN_00101d82(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023b2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102cda(local_60);
    local_48[1] = 0;
    FUN_00102d0e(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d4e(local_60,param_3);
  }
LAB_0010269e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001033b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103601(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103351(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001026b9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102fe2(param_1);
  FUN_00103004(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103048(void)

{
  return;
}




void FUN_001028a2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010427e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined4 FUN_00101d82(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221a(param_1,param_2);
  return;
}




void FUN_001021ae(long param_1)

{
  FUN_00102aba(param_1 + 0x20);
  return;
}




void FUN_001037f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036c9(param_3);
  FUN_00103854(param_1,param_2,uVar1);
  return;
}




void FUN_0010221a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b10(param_2);
  uVar1 = FUN_00102b2e(uVar1);
  FUN_00102b40(param_1,uVar1);
  return;
}




void FUN_00102fa2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103351(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101c3c(void)

{
  return;
}




void FUN_00103678(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103728(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00104149(pthread_t *param_1)

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




void FUN_00103fc1(void)

{
  return;
}




void FUN_0010425f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102095(local_28);
    FUN_00101c4c(param_1,uVar1);
    lVar2 = FUN_001020ab(local_28);
    FUN_001020c2(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001017bd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a74("Calling good()...");
  FUN_001017ad();
  FUN_00103a74("Finished good()");
  FUN_00103a74("Calling bad()...");
  FUN_00101509();
  FUN_00103a74("Finished bad()");
  return 0;
}




void FUN_001034e6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103660(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00101ccc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102100(param_1,param_2);
  return;
}




undefined8 FUN_0010329e(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_001029fc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001026b9(local_38);
    cVar1 = FUN_00101d82(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102095(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020ab(local_38);
    }
  }
  FUN_001027f6(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




long FUN_0010184b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00101930(undefined8 param_1)

{
  FUN_001019ba(param_1);
  return;
}




void FUN_00102b10(undefined8 param_1)

{
  FUN_0010329e(param_1);
  return;
}




ulong FUN_00103d64(long param_1,ulong param_2,long param_3)

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




void FUN_001020c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102968(param_1,param_2);
  FUN_001029ac(param_1,param_2);
  return;
}




void FUN_001034aa(void)

{
  return;
}




undefined8 FUN_00103f47(void)

{
  return 1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00101838(void)

{
  return;
}




void FUN_0010288e(void)

{
  return;
}




void FUN_0010402f(void)

{
  return;
}




void FUN_00103cd1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c0c(undefined8 param_1)

{
  FUN_00102086(param_1);
  return;
}




void FUN_00103835(undefined8 param_1)

{
  FUN_00102b10(param_1);
  return;
}




undefined8 FUN_0010321e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b4a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018d0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8
FUN_00101e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010227e(param_5);
  uVar2 = FUN_0010226c(param_4);
  uVar3 = FUN_0010225a(param_3);
  local_40 = FUN_00102290(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ebc to 00101eff has its CatchHandler @ 00101f3d */
  uVar1 = FUN_001026b9(local_40);
  local_38 = FUN_00102310(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020c2(param_1,local_40);
    FUN_001027f6(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010270c(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001019ba(long param_1)

{
  FUN_00101c0c(param_1);
  FUN_00101c2c(param_1);
  FUN_001018a6(param_1 + 8);
  return;
}




void FUN_001033fc(undefined8 param_1)

{
  FUN_00103614(param_1);
  return;
}




void FUN_00102022(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028a2(local_18,param_1);
  FUN_001028c0(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010407c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104045,local_18);
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




void FUN_00102968(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021ae(param_2);
  uVar2 = FUN_0010321e(param_1);
  FUN_00103230(uVar2,uVar1);
  return;
}




undefined8 FUN_0010226c(undefined8 param_1)

{
  return param_1;
}




void FUN_001021a0(void)

{
  return;
}




void FUN_001031e1(undefined8 param_1)

{
  FUN_0010184b(param_1);
  return;
}




void FUN_00101990(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b80(param_1,param_2);
  return;
}




void FUN_00103fab(void)

{
  return;
}




void FUN_00102d0e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103351(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104019(void)

{
  return;
}




undefined8 FUN_00101d14(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




long FUN_00101a54(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101ccc(param_1,param_2);
  local_28 = FUN_00101cf6(param_1);
  cVar2 = FUN_00101d14(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d3a(param_1);
    uVar3 = FUN_00101d60(&local_38);
    cVar2 = FUN_00101d82(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101af4;
    }
  }
  bVar1 = true;
LAB_00101af4:
  if (bVar1) {
    uVar3 = FUN_00101da9(param_2);
    FUN_00101de6(local_30,uVar3);
    FUN_00101e1e(&local_28,&local_38);
    local_38 = FUN_00101e40(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d60(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103230(undefined8 param_1,undefined8 param_2)

{
  FUN_001034aa(param_1,param_2);
  return;
}




undefined8 FUN_00102290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102b6a(param_1);
  uVar2 = FUN_0010227e(param_4);
  uVar3 = FUN_0010226c(param_3);
  uVar4 = FUN_0010225a(param_2);
  FUN_00102b96(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_00101930(param_1);
  return;
}




void FUN_00103b20(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104024(void)

{
  return;
}




undefined8 FUN_00103494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001018a6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001018d0(param_1);
  return;
}




undefined8 * FUN_00102f4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103626(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036c9(param_2);
  FUN_001036dc(uVar1,uVar2);
  return;
}




undefined8 FUN_00102b2e(undefined8 param_1)

{
  return param_1;
}




undefined4 * FUN_0010341a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102fe2(param_2);
  puVar2 = (undefined4 *)FUN_00103626(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001029e6(param_1);
  uVar2 = FUN_00101cb6(param_1);
  FUN_001029fc(param_1,uVar2,uVar1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101cf6(undefined8 param_1)

{
  FUN_00102150(param_1);
  return;
}




undefined8
FUN_0010270c(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001029e6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102cf0(param_3);
      uVar5 = FUN_001026b9(param_4);
      cVar1 = FUN_00101d82(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102790;
      }
    }
  }
  bVar2 = true;
LAB_00102790:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001027f6(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036c9(param_3);
  puVar3 = (undefined8 *)FUN_00101822(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_001037da(undefined8 param_1)

{
  FUN_00103835(param_1);
  return;
}




void FUN_0010325a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034be(param_1,param_2,param_3);
  return;
}




void FUN_00103fcc(void)

{
  return;
}




void FUN_001032b3(undefined8 param_1,undefined8 param_2)

{
  FUN_001034e6(param_1,param_2,0);
  return;
}




void FUN_00104045(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010347e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f8a(void)

{
  return;
}




void FUN_00103bf6(undefined4 param_1)

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




void FUN_00101910(undefined8 param_1)

{
  FUN_001019f6(param_1);
  return;
}




undefined8 FUN_0010305c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101ff6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ca3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00102cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103536(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010225a(param_3);
  uVar1 = FUN_0010226c(param_4);
  FUN_00101dbc(local_38,uVar1);
  FUN_0010227e(param_5);
  uVar1 = FUN_00101822(0x10,param_2);
                    /* try { // try from 001035be to 001035c2 has its CatchHandler @ 001035c5 */
  FUN_00103678(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103acc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102f02(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103351(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103351(param_3);
  param_1[1] = *puVar1;
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




undefined8 FUN_00103f56(void)

{
  return 0;
}




void FUN_0010376c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101822(0x30,param_2);
  uVar1 = FUN_001036c9(param_3);
  uVar2 = FUN_001021ae(param_2);
  uVar3 = FUN_0010321e(param_1);
  FUN_001037f8(uVar3,uVar2,uVar1);
  return;
}




void FUN_00101970(undefined8 param_1)

{
  FUN_00101a16(param_1);
  return;
}




void FUN_00103ba0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001029ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010321e(param_1);
  FUN_0010325a(uVar1,param_2,1);
  return;
}




undefined8 FUN_00102150(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027f6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010301a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102864(param_1,param_2);
  return param_1;
}




void FUN_00103f7f(void)

{
  return;
}




long FUN_00103072(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010341a(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010347e(param_2);
                    /* try { // try from 001030e1 to 00103173 has its CatchHandler @ 0010319f */
    uVar2 = FUN_00103072(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103494(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010341a(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010347e(local_38);
      uVar2 = FUN_00103072(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103494(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102b40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d0(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 * FUN_00102f76(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010165b(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101950(local_88);
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 001016cb to 00101734 has its CatchHandler @ 00101780 */
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a54(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101990(local_58,local_88);
                    /* try { // try from 0010173c to 00101740 has its CatchHandler @ 0010176b */
  FUN_0010398d(local_58);
  FUN_00101970(local_58);
  FUN_00101970(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00101d3a(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021a0(param_1);
  return unaff_EBX;
}




void FUN_0010400e(void)

{
  return;
}




undefined8 FUN_00102095(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001038a6(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = 2;
  puVar1 = (undefined8 *)FUN_00101a54(param_1,&local_1bc);
  local_1b0 = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    local_1b0[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103acc(*local_1b0);
  free(local_1b0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104320(void)

{
  return;
}




void FUN_00103b75(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001021d0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c50(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103f95(void)

{
  return;
}




undefined8 FUN_0010227e(undefined8 param_1)

{
  return param_1;
}




void FUN_001019f6(undefined8 param_1)

{
  FUN_00101c3c(param_1);
  return;
}




undefined8 FUN_00102d4e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101cb6(param_1);
  local_50 = FUN_001029e6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026b9(local_58);
    local_59 = FUN_00101d82(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102095(local_58);
    }
    else {
      local_58 = FUN_001020ab(local_58);
    }
  }
  FUN_001027f6(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103364(param_1);
    cVar1 = FUN_00101d14(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033b4(local_38,&local_58,&local_50);
      goto LAB_00102ed0;
    }
    FUN_00102f4a(&local_48);
  }
  uVar2 = FUN_00102cf0(local_48);
  cVar1 = FUN_00101d82(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fa2(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033b4(local_38,&local_58,&local_50);
  }
LAB_00102ed0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010398d(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined4 local_1bc;
  ulong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = 2;
  puVar1 = (undefined8 *)FUN_00101a54(param_1,&local_1bc);
  local_1b0 = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    local_1b0[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103acc(*local_1b0);
  free(local_1b0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103660(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001034be(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103fd7(void)

{
  return;
}




void FUN_00102cf0(undefined8 param_1)

{
  FUN_001026b9(param_1);
  return;
}




undefined8 FUN_00103614(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103004(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102c74(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001027f6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010225a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103351(undefined8 param_1)

{
  return param_1;
}




void FUN_00103af4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103601(undefined8 param_1)

{
  return param_1;
}




void FUN_00103728(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001037da(param_2);
  puVar2 = (undefined4 *)FUN_00102b2e(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102086(void)

{
  return;
}




void FUN_00103bcb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001036dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b6a(param_1);
  uVar2 = FUN_001036c9(param_2);
  FUN_0010376c(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_001029e6(long param_1)

{
  return param_1 + 8;
}




void FUN_00101a16(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cb6(param_1);
  FUN_00101c4c(param_1,uVar1);
  FUN_00101910(param_1);
  return;
}




void FUN_00102b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101822(0x30,param_2);
  uVar1 = FUN_0010227e(param_5);
  uVar2 = FUN_0010226c(param_4);
  uVar3 = FUN_0010225a(param_3);
  uVar4 = FUN_001021ae(param_2);
  uVar5 = FUN_0010321e(param_1);
                    /* try { // try from 00102c25 to 00102c29 has its CatchHandler @ 00102c2c */
  FUN_001032e1(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010328c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c2c(void)

{
  return;
}




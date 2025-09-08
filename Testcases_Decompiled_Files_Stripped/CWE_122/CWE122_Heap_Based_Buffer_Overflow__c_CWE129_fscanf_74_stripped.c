
undefined8 FUN_00102954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00104450(undefined8 *param_1)

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




undefined8 FUN_00102aca(undefined8 param_1)

{
  return param_1;
}




void FUN_00103610(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102954(local_28);
    FUN_00103610(param_1,uVar1);
    lVar2 = FUN_00102a8c(local_28);
    FUN_00102352(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00104208(void)

{
  return;
}




void FUN_00102c9e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102e1a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 FUN_00102ab4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101d3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2c(param_2);
  FUN_001024b6(param_1,uVar1);
  return;
}




undefined8 FUN_0010250c(undefined8 param_1)

{
  return param_1;
}




void FUN_00104276(void)

{
  return;
}




undefined8 FUN_00101dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102548(param_1);
  uVar2 = FUN_00101dda(param_4);
  uVar3 = FUN_00101dc8(param_3);
  uVar4 = FUN_00101db6(param_2);
  FUN_00102574(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103396(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001033c0(param_1);
  return;
}




void FUN_001024b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2c(param_2);
  FUN_0010251e(param_1,uVar1);
  return;
}




void FUN_00102498(undefined8 param_1)

{
  FUN_00102aa2(param_1);
  return;
}




void FUN_00104297(void)

{
  return;
}




void FUN_0010424a(void)

{
  return;
}




void FUN_0010428c(void)

{
  return;
}




void FUN_001042ce(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103d23(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102390(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined4 * FUN_00103ae2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001029d6(param_2);
  puVar2 = (undefined4 *)FUN_00103b72(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001044c9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102548(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aca(param_1);
  FUN_00102adc(uVar1,1);
  return;
}




void FUN_00104234(void)

{
  return;
}




undefined8 FUN_00102b8c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102390(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104281(void)

{
  return;
}




void FUN_00102df2(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8
FUN_00101b16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101dda(param_5);
  uVar2 = FUN_00101dc8(param_4);
  uVar3 = FUN_00101db6(param_3);
  local_40 = FUN_00101dec(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101b92 to 00101bd5 has its CatchHandler @ 00101c13 */
  uVar1 = FUN_00102215(local_40);
  local_38 = FUN_00101e6c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102352(param_1,local_40);
    FUN_00102390(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102268(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00102adc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c9e(param_1,param_2,0);
  return;
}




undefined8 FUN_00101a7f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f2c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined4 FUN_00101a10(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101cfc(param_1);
  return unaff_EBX;
}




void FUN_0010317a(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103440(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 001031cc to 00103249 has its CatchHandler @ 00103295 */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103480(local_58,local_88);
                    /* try { // try from 00103251 to 00103255 has its CatchHandler @ 00103280 */
  FUN_0010173b(local_58);
  FUN_00103460(local_58);
  FUN_00103460(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d55(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_001023c4(long param_1)

{
  return param_1 + 8;
}




void FUN_001034aa(long param_1)

{
  FUN_001035d0(param_1);
  FUN_001035f0(param_1);
  FUN_00103396(param_1 + 8);
  return;
}




undefined8 FUN_001041d0(void)

{
  return 1;
}




undefined8 FUN_001036ea(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001044e8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102ec6(undefined8 param_1)

{
  FUN_00102ee4(param_1);
  return;
}




ulong FUN_00103fed(long param_1,ulong param_2,long param_3)

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




void FUN_00102cee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101db6(param_3);
  uVar1 = FUN_00101dc8(param_4);
  FUN_00101a92(local_38,uVar1);
  FUN_00101dda(param_5);
  uVar1 = FUN_0010184d(8,param_2);
                    /* try { // try from 00102d76 to 00102d7a has its CatchHandler @ 00102d7d */
  FUN_00102e32(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001026b8(long param_1)

{
  return param_1 + 0x20;
}




void FUN_001045b0(void)

{
  return;
}




void FUN_00102a52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aca(param_1);
  FUN_00102c6c(uVar1,param_2,1);
  return;
}




long FUN_00103700(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00102a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103420(undefined8 param_1)

{
  FUN_001034aa(param_1);
  return;
}




undefined8 FUN_00102b7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104540(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001023ae(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001023da(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102215(local_38);
    cVar1 = FUN_00101a58(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102954(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102a8c(local_38);
    }
  }
  FUN_00102390(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001028e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b7a(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b7a(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103bbe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102548(param_1);
  uVar2 = FUN_00103bac(param_2);
  FUN_00103c0a(param_1,uVar1,uVar2);
  return uVar1;
}




undefined4 FUN_00101a58(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 * FUN_0010296a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




long FUN_00103369(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_00101dc8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ac3(undefined8 param_1)

{
  FUN_00103369(param_1);
  return;
}




undefined8 FUN_0010442d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104255(void)

{
  return;
}




void FUN_00104507(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101dda(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023c4(param_1);
  uVar2 = FUN_001023ae(param_1);
  FUN_001023da(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00103836(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001023c4(param_1);
  uVar2 = FUN_00103920(param_2);
  uVar1 = FUN_00103936(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001028ca(param_1);
  uVar2 = FUN_00103aa5(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_001026b8(param_1);
  uVar2 = FUN_00103ac3(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102652(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001023c4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001026ce(local_50);
    cVar2 = FUN_00101a58(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001026ce(local_50);
      cVar2 = FUN_00101a58(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102996(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_001026b8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_001026b8(local_60);
          local_48[1] = 0;
          FUN_001026ec(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010296a(local_48);
          uVar6 = FUN_001026ce(*puVar5);
          cVar2 = FUN_00101a58(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010272c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102954(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001026ec(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001028e0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001028ca(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001028ca(local_60);
        uVar6 = FUN_001028ca(local_60);
        FUN_001028e0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102928(local_48);
        uVar6 = FUN_001026ce(*puVar5);
        cVar2 = FUN_00101a58(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010272c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102954(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001026ec(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001028e0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001021fa;
  }
  lVar3 = FUN_001026a2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101f0e:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_001026b8(local_60);
    uVar6 = FUN_001026ce(*puVar5);
    cVar2 = FUN_00101a58(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101f0e;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_001026b8(local_60);
    local_48[1] = 0;
    FUN_001026ec(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010272c(local_60,param_3);
  }
LAB_001021fa:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_001035f0(void)

{
  return;
}




void FUN_00102c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102df2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102db9(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001040f1(long param_1,ulong param_2,long param_3)

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




long FUN_00101876(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001019a2(param_1,param_2);
  local_28 = FUN_001019cc(param_1);
  cVar2 = FUN_001019ea(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101a10(param_1);
    uVar3 = FUN_00101a36(&local_38);
    cVar2 = FUN_00101a58(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101916;
    }
  }
  bVar1 = true;
LAB_00101916:
  if (bVar1) {
    uVar3 = FUN_00101a7f(param_2);
    FUN_00101abc(local_30,uVar3);
    FUN_00101af4(&local_28,&local_38);
    local_38 = FUN_00101b16(param_1,local_28,&DAT_00105008,local_30,&local_39);
  }
  lVar4 = FUN_00101a36(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_001026ce(undefined8 param_1)

{
  FUN_00102215(param_1);
  return;
}




void FUN_00103804(void)

{
  return;
}




undefined8 FUN_001041df(void)

{
  return 0;
}




void FUN_00101a36(undefined8 *param_1)

{
  FUN_00101d0a(*param_1);
  return;
}




void FUN_00102b0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101dda(param_5);
  uVar2 = FUN_00101dc8(param_4);
  uVar3 = FUN_00101db6(param_3);
  FUN_00102cee(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001042c3(void)

{
  return;
}




void FUN_00103f8d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024ee(param_2);
  uVar1 = FUN_0010250c(uVar1);
  FUN_0010251e(param_1,uVar1);
  return;
}




void FUN_00103c0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010184d(0x28,param_2);
  uVar1 = FUN_00103bac(param_3);
  uVar2 = FUN_00101d0a(param_2);
  uVar3 = FUN_00102aca(param_1);
  FUN_00103c78(uVar3,uVar2,uVar1);
  return;
}




void FUN_001034e6(undefined8 param_1)

{
  FUN_00103600(param_1);
  return;
}




void FUN_00103dfe(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001024ee(undefined8 param_1)

{
  FUN_00102ab4(param_1);
  return;
}




undefined8 FUN_00101cac(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102390(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103716(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103818(local_18,param_1);
  FUN_00103836(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010184d(0x28,param_2);
  uVar1 = FUN_00101dda(param_5);
  uVar2 = FUN_00101dc8(param_4);
  uVar3 = FUN_00101db6(param_3);
  uVar4 = FUN_00101d0a(param_2);
  uVar5 = FUN_00102aca(param_1);
                    /* try { // try from 00102603 to 00102607 has its CatchHandler @ 0010260a */
  FUN_00102b0a(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




bool FUN_001043d2(pthread_t *param_1)

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




void FUN_00102bdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102db9(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102b7a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001029d6(long param_1)

{
  FUN_00102c24(param_1 + 0x20);
  return;
}




long FUN_001028ca(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103480(undefined8 param_1,undefined8 param_2)

{
  FUN_00103544(param_1,param_2);
  return;
}




void FUN_0010423f(void)

{
  return;
}




void FUN_00102f02(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103440(local_88);
  local_8c = 0xffffffff;
                    /* try { // try from 00102f54 to 00102fd1 has its CatchHandler @ 0010301d */
  __isoc99_fscanf(stdin,&DAT_00105057,&local_8c);
  local_58[0] = 0;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = local_8c;
  FUN_00103480(local_58,local_88);
                    /* try { // try from 00102fd9 to 00102fdd has its CatchHandler @ 00103008 */
  FUN_00101529(local_58);
  FUN_00103460(local_58);
  FUN_00103460(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001042ad(void)

{
  return;
}




undefined8
FUN_00102268(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001023c4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001026ce(param_3);
      uVar5 = FUN_00102215(param_4);
      cVar1 = FUN_00101a58(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001022ec;
      }
    }
  }
  bVar2 = true;
LAB_001022ec:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102390(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101d2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103506(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ae(param_1);
  FUN_00103610(param_1,uVar1);
  FUN_00103400(param_1);
  return;
}




void FUN_00102a0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d0a(param_2);
  uVar2 = FUN_00102aca(param_1);
  FUN_00102c42(uVar2,uVar1);
  return;
}




void FUN_00103dd3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001042b8(void)

{
  return;
}




void FUN_001037da(undefined8 param_1,undefined8 param_2)

{
  FUN_0010390c(param_1,param_2);
  return;
}




undefined8 FUN_001032d7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103cfd("Calling good()...");
  FUN_001032c2();
  FUN_00103cfd("Finished good()");
  FUN_00103cfd("Calling bad()...");
  FUN_00102f02();
  FUN_00103cfd("Finished bad()");
  return 0;
}




long FUN_00103936(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103ae2(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103b46(param_2);
                    /* try { // try from 001039a5 to 00103a37 has its CatchHandler @ 00103a63 */
    uVar2 = FUN_00103936(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103b5c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103ae2(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103b46(local_38);
      uVar2 = FUN_00103936(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103b5c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00102dcc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010377a(void)

{
  return;
}




void FUN_001026ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102b7a(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101a92(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d76(param_1,param_2);
  return;
}




void FUN_00102215(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029d6(param_1);
  FUN_001029f8(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102aa2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103bac(param_3);
  FUN_00103cb6(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00103bac(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101470();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_00103544(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010367a(param_1,param_2);
  lVar1 = FUN_001036ea(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103700(param_1);
                    /* try { // try from 0010359f to 001035a3 has its CatchHandler @ 001035a9 */
    uVar3 = FUN_00103716(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00104260(void)

{
  return;
}




void FUN_00103600(void)

{
  return;
}




undefined8 FUN_00104305(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001042ce,local_18);
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




undefined8 FUN_00103789(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001038de(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010421e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00103ed9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103440(undefined8 param_1)

{
  FUN_00103420(param_1);
  return;
}




void FUN_0010251e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2c(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103f5a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001019ea(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102e84(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ec6(param_2);
  puVar2 = (undefined4 *)FUN_0010250c(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_001038de(undefined8 param_1,undefined8 param_2)

{
  FUN_001037da(param_1,param_2);
  return param_1;
}




void FUN_00103d7d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001032c2(void)

{
  FUN_0010304a();
  FUN_0010317a();
  return;
}




void FUN_0010173b(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101876(param_1,&local_24);
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
    FUN_00103cfd("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d55(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101abc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d2c(param_2);
  FUN_00101d3e(param_1,uVar1);
  return param_1;
}




int FUN_001041ee(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103b72(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103bac(param_2);
  FUN_00103bbe(uVar1,uVar2);
  return;
}




void FUN_00103e54(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c24(undefined8 param_1)

{
  FUN_00102dcc(param_1);
  return;
}




undefined8 FUN_0010272c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001023ae(param_1);
  local_50 = FUN_001023c4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102215(local_58);
    local_59 = FUN_00101a58(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102954(local_58);
    }
    else {
      local_58 = FUN_00102a8c(local_58);
    }
  }
  FUN_00102390(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102b8c(param_1);
    cVar1 = FUN_001019ea(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102bdc(local_38,&local_58,&local_50);
      goto LAB_001028ae;
    }
    FUN_00102928(&local_48);
  }
  uVar2 = FUN_001026ce(local_48);
  cVar1 = FUN_00101a58(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102996(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102bdc(local_38,&local_58,&local_50);
  }
LAB_001028ae:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103400(undefined8 param_1)

{
  FUN_001034e6(param_1);
  return;
}




void FUN_00104213(void)

{
  return;
}




undefined8 FUN_0010184d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103460(undefined8 param_1)

{
  FUN_00103506(param_1);
  return;
}




void FUN_00102dde(void)

{
  return;
}




long FUN_0010333c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00101af4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102352(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a0e(param_1,param_2);
  FUN_00102a52(param_1,param_2);
  return;
}




void FUN_001042a2(void)

{
  return;
}




void FUN_001019cc(undefined8 param_1)

{
  FUN_00101cac(param_1);
  return;
}




undefined8 FUN_001026a2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00103cb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103bac(param_3);
  puVar2 = (undefined8 *)FUN_0010184d(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103e29(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 * FUN_00102928(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103f01(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101863(void)

{
  return;
}




void FUN_00104229(void)

{
  return;
}




undefined8 FUN_001029f8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101cfc(void)

{
  return;
}




void FUN_0010304a(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103440(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010309e to 00103101 has its CatchHandler @ 0010314d */
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101876(local_88,local_58);
  *puVar1 = 7;
  FUN_00103480(local_58,local_88);
                    /* try { // try from 00103109 to 0010310d has its CatchHandler @ 00103138 */
  FUN_00101632(local_58);
  FUN_00103460(local_58);
  FUN_00103460(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101632(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101876(param_1,&local_24);
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
    FUN_00103cfd("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d55(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cfd(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103aa5(undefined8 param_1)

{
  FUN_0010333c(param_1);
  return;
}




void FUN_00103818(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010426b(void)

{
  return;
}




void FUN_00102ee4(undefined8 param_1)

{
  FUN_001024ee(param_1);
  return;
}




undefined8 FUN_00103920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001033c0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00101529(undefined8 param_1)

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
  piVar1 = (int *)FUN_00101876(param_1,&local_24);
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
    FUN_00103cfd("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)local_18 + (long)local_1c * 4) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00103d55(*(undefined4 *)((long)local_18 + (long)local_20 * 4));
    }
  }
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e32(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102e84(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102996(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b7a(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010367a(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103789(param_1,param_2);
  FUN_00103804(param_1,param_2);
  FUN_00103396(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103da9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010390c(void)

{
  return;
}




undefined8 FUN_00103b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102652(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102390(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103e7f(undefined4 param_1)

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




undefined8 FUN_00103b46(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102c42(undefined8 param_1,undefined8 param_2)

{
  FUN_00102dde(param_1,param_2);
  return;
}




void FUN_00101d0a(long param_1)

{
  FUN_00102498(param_1 + 0x20);
  return;
}




undefined8 FUN_00102e1a(void)

{
  return 0x333333333333333;
}




void FUN_001019a2(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c5c(param_1,param_2);
  return;
}




void FUN_001035d0(undefined8 param_1)

{
  FUN_0010377a(param_1);
  return;
}




undefined8 FUN_00101db6(undefined8 param_1)

{
  return param_1;
}




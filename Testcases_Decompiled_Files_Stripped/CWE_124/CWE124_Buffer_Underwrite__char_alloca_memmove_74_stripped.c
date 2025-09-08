
undefined8 FUN_00102286(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010292c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040f4(void)

{
  return;
}




void FUN_00104370(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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

long FUN_00102446(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102daa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b1c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e26(local_50);
    cVar2 = FUN_00101eb8(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e26(local_50);
      cVar2 = FUN_00101eb8(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001030d8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e10(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e10(local_60);
          local_48[1] = 0;
          FUN_00102e44(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001030ac(local_48);
          uVar6 = FUN_00102e26(*puVar5);
          cVar2 = FUN_00101eb8(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102e84(local_60,param_3);
          }
          else {
            lVar3 = FUN_001021cb(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102e44(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103038(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103022(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103022(local_60);
        uVar6 = FUN_00103022(local_60);
        FUN_00103038(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103080(local_48);
        uVar6 = FUN_00102e26(*puVar5);
        cVar2 = FUN_00101eb8(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102e84(local_60,param_3);
        }
        else {
          lVar3 = FUN_001021cb(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102e44(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103038(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001027d4;
  }
  lVar3 = FUN_00102dfa(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001024e8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e10(local_60);
    uVar6 = FUN_00102e26(*puVar5);
    cVar2 = FUN_00101eb8(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001024e8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e10(local_60);
    local_48[1] = 0;
    FUN_00102e44(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102e84(local_60,param_3);
  }
LAB_001027d4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035f4(param_1,param_2,param_3);
  return;
}




void FUN_00101529(void)

{
  long *plVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  long local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a86(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1015f5;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = (long)local_98 + -8;
  local_58[0] = 0;
                    /* try { // try from 0010162a to 00101693 has its CatchHandler @ 001016df */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10162f;
  plVar1 = (long *)FUN_00101b8a(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101653;
  plVar1 = (long *)FUN_00101b8a(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101677;
  plVar1 = (long *)FUN_00101b8a(local_88,local_58);
  *plVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101694;
  FUN_00101ac6(local_58,local_88);
                    /* try { // try from 0010169b to 0010169f has its CatchHandler @ 001016ca */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1016a0;
  FUN_001039dc(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1016ac;
  FUN_00101aa6(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1016b8;
  FUN_00101aa6(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101702;
  __stack_chk_fail();
}




void FUN_00102a9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022e4(param_2);
  uVar2 = FUN_00103354(param_1);
  FUN_00103366(uVar2,uVar1);
  return;
}




ulong FUN_00103e1e(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001023c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102ca0(param_1);
  uVar2 = FUN_001023b4(param_4);
  uVar3 = FUN_001023a2(param_3);
  uVar4 = FUN_00102390(param_2);
  FUN_00102ccc(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101af0(long param_1)

{
  FUN_00101d42(param_1);
  FUN_00101d62(param_1);
  FUN_001019dc(param_1 + 8);
  return;
}




void FUN_00101ef2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102350(param_1,param_2);
  return;
}




void FUN_00104070(void)

{
  return;
}




void FUN_00101d42(undefined8 param_1)

{
  FUN_001021bc(param_1);
  return;
}




void FUN_00103038(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103487(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103487(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined4 FUN_00101eb8(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101e96(undefined8 *param_1)

{
  FUN_001022e4(*param_1);
  return;
}




void FUN_00104091(void)

{
  return;
}




void FUN_00104044(void)

{
  return;
}




void FUN_00104086(void)

{
  return;
}




void FUN_001040c8(void)

{
  return;
}




void FUN_0010396b(undefined8 param_1)

{
  FUN_00102c46(param_1);
  return;
}




void FUN_00101e02(undefined8 param_1,undefined8 param_2)

{
  FUN_00102236(param_1,param_2);
  return;
}




undefined8 FUN_0010374a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aa6(undefined8 param_1)

{
  FUN_00101b4c(param_1);
  return;
}




void FUN_001040ff(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101a46(undefined8 param_1)

{
  FUN_00101b2c(param_1);
  return;
}




undefined8 FUN_00101958(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




int FUN_0010401f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010294a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103150(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010407b(void)

{
  return;
}




void FUN_00102c0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102306(param_2);
  FUN_00102c76(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_001027ef(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103118(param_1);
  FUN_0010313a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101981(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103c5a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00102e10(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010398a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001037ff(param_3);
  puVar3 = (undefined8 *)FUN_00101958(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00101e4a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010317e(void)

{
  return;
}




void FUN_00103d5d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001033d4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010196e(void)

{
  return;
}




undefined8 FUN_00104136(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001040ff,local_18);
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




void FUN_00102ca0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103354(param_1);
  FUN_001033e9(uVar1,1);
  return;
}




void FUN_00103d0a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102ae2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103354(param_1);
  FUN_00103390(uVar1,param_2,1);
  return;
}




long FUN_00102142(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00104281(undefined8 *param_1)

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




undefined8 FUN_00102390(undefined8 param_1)

{
  return param_1;
}




void FUN_001033e9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010361c(param_1,param_2,0);
  return;
}




undefined8 FUN_001023a2(undefined8 param_1)

{
  return param_1;
}




void FUN_001030d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103487(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010292c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010425e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e2c(undefined8 param_1)

{
  FUN_00102286(param_1);
  return;
}




long FUN_001019ae(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined4 FUN_00101e70(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001022d6(param_1);
  return unaff_EBX;
}




void FUN_001021f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a9e(param_1,param_2);
  FUN_00102ae2(param_1,param_2);
  return;
}




undefined8 FUN_00103812(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ca0(param_1);
  uVar2 = FUN_001037ff(param_2);
  FUN_001038a2(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001022d6(void)

{
  return;
}




long FUN_00103022(long param_1)

{
  return param_1 + 0x18;
}




long FUN_00101b8a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e02(param_1,param_2);
  local_28 = FUN_00101e2c(param_1);
  cVar2 = FUN_00101e4a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101e70(param_1);
    uVar3 = FUN_00101e96(&local_38);
    cVar2 = FUN_00101eb8(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c2a;
    }
  }
  bVar1 = true;
LAB_00101c2a:
  if (bVar1) {
    uVar3 = FUN_00101edf(param_2);
    FUN_00101f1c(local_30,uVar3);
    FUN_00101f54(&local_28,&local_38);
    local_38 = FUN_00101f76(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101e96(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00103737(undefined8 param_1)

{
  return param_1;
}




void FUN_001040e9(void)

{
  return;
}




void FUN_0010404f(void)

{
  return;
}




bool FUN_00104203(pthread_t *param_1)

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




void FUN_00101cb6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001020bc(param_1,param_2);
  lVar1 = FUN_0010212c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102142(param_1);
                    /* try { // try from 00101d11 to 00101d15 has its CatchHandler @ 00101d1b */
    uVar3 = FUN_00102158(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_001035b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101d62(void)

{
  return;
}




undefined8 FUN_00103354(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029f6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b1c(param_1);
  uVar2 = FUN_00103192(param_2);
  uVar1 = FUN_001031a8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103022(param_1);
  uVar2 = FUN_00103317(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e10(param_1);
  uVar2 = FUN_00103335(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00101a86(undefined8 param_1)

{
  FUN_00101a66(param_1);
  return;
}




long FUN_00102b1c(long param_1)

{
  return param_1 + 8;
}




void FUN_00103d32(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102158(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029d8(local_18,param_1);
  FUN_001029f6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103532(undefined8 param_1)

{
  FUN_0010374a(param_1);
  return;
}




void FUN_00103d8b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a66(undefined8 param_1)

{
  FUN_00101af0(param_1);
  return;
}




undefined8
FUN_00102842(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b1c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e26(param_3);
      uVar5 = FUN_001027ef(param_4);
      cVar1 = FUN_00101eb8(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001028c6;
      }
    }
  }
  bVar2 = true;
LAB_001028c6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010292c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001040bd(void)

{
  return;
}




void FUN_00103cb0(undefined4 param_1)

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




void FUN_00101b2c(undefined8 param_1)

{
  FUN_00101d72(param_1);
  return;
}




void FUN_0010385e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103910(param_2);
  puVar2 = (undefined4 *)FUN_00102c64(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103192(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103b54(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101edf(undefined8 param_1)

{
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




void FUN_00103417(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001023b4(param_5);
  uVar2 = FUN_001023a2(param_4);
  uVar3 = FUN_00102390(param_3);
  FUN_0010366c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8
FUN_00101f76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001023b4(param_5);
  uVar2 = FUN_001023a2(param_4);
  uVar3 = FUN_00102390(param_3);
  local_40 = FUN_001023c6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ff2 to 00102035 has its CatchHandler @ 00102073 */
  uVar1 = FUN_001027ef(local_40);
  local_38 = FUN_00102446(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021f8(param_1,local_40);
    FUN_0010292c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102842(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_001040de(void)

{
  return;
}




void FUN_0010299a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010317e(param_1,param_2);
  return;
}




undefined8 FUN_00102306(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021e1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103150(undefined8 param_1,undefined8 param_2)

{
  FUN_0010299a(param_1,param_2);
  return param_1;
}




void FUN_00104039(void)

{
  return;
}




undefined8 FUN_00102daa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010292c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040a7(void)

{
  return;
}




void FUN_00101d82(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001021cb(local_28);
    FUN_00101d82(param_1,uVar1);
    lVar2 = FUN_001021e1(local_28);
    FUN_001021f8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_001018f3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b2e("Calling good()...");
  FUN_001018e3();
  FUN_00103b2e("Finished good()");
  FUN_00103b2e("Calling bad()...");
  FUN_00101529();
  FUN_00103b2e("Finished bad()");
  return 0;
}




long FUN_001031a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103550(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001035b4(param_2);
                    /* try { // try from 00103217 to 001032a9 has its CatchHandler @ 001032d5 */
    uVar2 = FUN_001031a8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001035ca(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103550(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001035b4(local_38);
      uVar2 = FUN_001031a8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001035ca(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c46(param_2);
  uVar1 = FUN_00102c64(uVar1);
  FUN_00102c76(param_1,uVar1);
  return;
}




void FUN_00103b2e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001040b2(void)

{
  return;
}




void FUN_00101a06(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001034ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103737(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103487(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101ac6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101cb6(param_1,param_2);
  return;
}




void FUN_00102e44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103487(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010361c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103796(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00102b32(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001027ef(local_38);
    cVar1 = FUN_00101eb8(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001021cb(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001021e1(local_38);
    }
  }
  FUN_0010292c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00103487(undefined8 param_1)

{
  return param_1;
}




void FUN_001021bc(void)

{
  return;
}




void FUN_00101d72(void)

{
  return;
}




undefined8 FUN_001023b4(undefined8 param_1)

{
  return param_1;
}




void FUN_001038a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101958(0x30,param_2);
  uVar1 = FUN_001037ff(param_3);
  uVar2 = FUN_001022e4(param_2);
  uVar3 = FUN_00103354(param_1);
  FUN_0010392e(uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_001037ff(undefined8 param_1)

{
  return param_1;
}




void FUN_00103317(undefined8 param_1)

{
  FUN_00101981(param_1);
  return;
}




void FUN_0010405a(void)

{
  return;
}




void FUN_00103366(undefined8 param_1,undefined8 param_2)

{
  FUN_001035e0(param_1,param_2);
  return;
}




void FUN_001040d3(void)

{
  return;
}




undefined8 FUN_0010349a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010292c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104001(void)

{
  return 1;
}




void FUN_00103c04(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103118(long param_1)

{
  FUN_00103532(param_1 + 0x20);
  return;
}




undefined8 FUN_00101f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102306(param_2);
  FUN_00102318(param_1,uVar1);
  return param_1;
}




void FUN_00103c85(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102c76(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102306(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001035ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001039dc(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101b8a(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103b2e(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e26(undefined8 param_1)

{
  FUN_001027ef(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed0)();
  return;
}




void FUN_00103dbe(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001037ae(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010385e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bae(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029c4(void)

{
  return;
}




undefined8 FUN_001021cb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 * FUN_001030ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




ulong FUN_00103f22(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010313a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bf0(undefined8 param_1)

{
  FUN_001033c2(param_1);
  return;
}




undefined8 FUN_00102e84(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101dec(param_1);
  local_50 = FUN_00102b1c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001027ef(local_58);
    local_59 = FUN_00101eb8(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001021cb(local_58);
    }
    else {
      local_58 = FUN_001021e1(local_58);
    }
  }
  FUN_0010292c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010349a(param_1);
    cVar1 = FUN_00101e4a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001034ea(local_38,&local_58,&local_50);
      goto LAB_00103006;
    }
    FUN_00103080(&local_48);
  }
  uVar2 = FUN_00102e26(local_48);
  cVar1 = FUN_00101eb8(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001030d8(local_38,&local_48,&local_40);
  }
  else {
    FUN_001034ea(local_38,&local_58,&local_50);
  }
LAB_00103006:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010409c(void)

{
  return;
}




undefined8 FUN_00101dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010212c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103910(undefined8 param_1)

{
  FUN_0010396b(param_1);
  return;
}




void FUN_001042fa(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103b86(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102236(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b1c(param_1);
  uVar2 = FUN_00101dec(param_1);
  FUN_00102b32(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103c2f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00104010(void)

{
  return 0;
}




void FUN_00102318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102306(param_2);
  FUN_00102c0e(param_1,uVar1);
  return;
}




void FUN_00101708(void)

{
  undefined8 *puVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  void *local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a86(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1017d4;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = local_98;
  local_58[0] = 0;
                    /* try { // try from 00101805 to 0010186e has its CatchHandler @ 001018ba */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10180a;
  puVar1 = (undefined8 *)FUN_00101b8a(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10182e;
  puVar1 = (undefined8 *)FUN_00101b8a(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101852;
  puVar1 = (undefined8 *)FUN_00101b8a(local_88,local_58);
  *puVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10186f;
  FUN_00101ac6(local_58,local_88);
                    /* try { // try from 00101876 to 0010187a has its CatchHandler @ 001018a5 */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10187b;
  FUN_00103a85(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101887;
  FUN_00101aa6(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101893;
  FUN_00101aa6(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1018dd;
  __stack_chk_fail();
}




undefined8 FUN_00102dfa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001043e0(void)

{
  return;
}




void FUN_0010392e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001037ff(param_3);
  FUN_0010398a(param_1,param_2,uVar1);
  return;
}




void FUN_0010366c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102390(param_3);
  uVar1 = FUN_001023a2(param_4);
  FUN_00101ef2(local_38,uVar1);
  FUN_001023b4(param_5);
  uVar1 = FUN_00101958(0x10,param_2);
                    /* try { // try from 001036f4 to 001036f8 has its CatchHandler @ 001036fb */
  FUN_001037ae(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103550(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103118(param_2);
  puVar2 = (undefined4 *)FUN_0010375c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104065(void)

{
  return;
}




void FUN_00102ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101958(0x30,param_2);
  uVar1 = FUN_001023b4(param_5);
  uVar2 = FUN_001023a2(param_4);
  uVar3 = FUN_00102390(param_3);
  uVar4 = FUN_001022e4(param_2);
  uVar5 = FUN_00103354(param_1);
                    /* try { // try from 00102d5b to 00102d5f has its CatchHandler @ 00102d62 */
  FUN_00103417(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001035f4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 * FUN_00103080(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00102c64(undefined8 param_1)

{
  return param_1;
}




void FUN_001019dc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a06(param_1);
  return;
}




void FUN_001022e4(long param_1)

{
  FUN_00102bf0(param_1 + 0x20);
  return;
}




undefined8 FUN_001033c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a85(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101b8a(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103b2e(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001035e0(void)

{
  return;
}




undefined8 FUN_00103796(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001020bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010294a(param_1,param_2);
  FUN_001029c4(param_1,param_2);
  FUN_001019dc(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104338(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103bda(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010375c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001037ff(param_2);
  FUN_00103812(uVar1,uVar2);
  return;
}




void FUN_001029d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001018e3(void)

{
  FUN_00101708();
  return;
}




void FUN_00102c46(undefined8 param_1)

{
  FUN_001033d4(param_1);
  return;
}




void FUN_00103335(undefined8 param_1)

{
  FUN_001019ae(param_1);
  return;
}




void FUN_00104319(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101dec(param_1);
  FUN_00101d82(param_1,uVar1);
  FUN_00101a46(param_1);
  return;
}




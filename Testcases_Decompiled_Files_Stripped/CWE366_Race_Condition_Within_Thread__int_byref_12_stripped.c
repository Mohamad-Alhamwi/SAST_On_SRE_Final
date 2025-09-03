
void FUN_00101e1d(void)

{
  return;
}




void FUN_00101a10(undefined4 param_1)

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




void FUN_0010180a(void)

{
  FUN_00101614();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




undefined8 FUN_0010181f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010188e("Calling good()...");
  FUN_0010180a();
  FUN_0010188e("Finished good()");
  FUN_0010188e("Calling bad()...");
  FUN_00101444();
  FUN_0010188e("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f30)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




bool FUN_00101f63(pthread_t *param_1)

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




void FUN_00101de6(void)

{
  return;
}




void FUN_0010193a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101e12(void)

{
  return;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 FUN_00101fe1(undefined8 *param_1)

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




undefined8 FUN_00101fbe(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101da4(void)

{
  return;
}




void FUN_001018b4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_00101e28(void)

{
  return;
}




void FUN_00101444(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101d7f();
  if (iVar1 == 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101fe1(&DAT_00105020);
    if (iVar1 != 0) {
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_20 != 0) {
        iVar1 = FUN_00101f63(local_20);
        if (iVar1 != 0) {
          FUN_00101fbe(local_20);
        }
      }
      if (local_18 != 0) {
        iVar1 = FUN_00101f63(local_18);
        if (iVar1 != 0) {
          FUN_00101fbe(local_18);
        }
      }
      FUN_00102098(DAT_00105020);
      FUN_001018e6(local_24);
    }
  }
  else {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101e96(FUN_001013a9,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    iVar1 = FUN_00101e96(FUN_001013a9,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_20 != 0) {
      iVar1 = FUN_00101f63(local_20);
      if (iVar1 != 0) {
        FUN_00101fbe(local_20);
      }
    }
    if (local_18 != 0) {
      iVar1 = FUN_00101f63(local_18);
      if (iVar1 != 0) {
        FUN_00101fbe(local_18);
      }
    }
    FUN_001018e6(local_24);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d61(void)

{
  return 1;
}




void FUN_001013e6(int *param_1)

{
  undefined4 local_14;
  
  FUN_0010205a(DAT_00105020);
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  FUN_00102079(DAT_00105020);
  return;
}




undefined8 FUN_00101d70(void)

{
  return 0;
}




void FUN_0010205a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00101c82(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001013a9(int *param_1)

{
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 1000000; local_14 = local_14 + 1) {
    *param_1 = *param_1 + 1;
  }
  return;
}




undefined8 FUN_00101e96(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e5f,local_18);
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




void FUN_00101daf(void)

{
  return;
}




void FUN_00101e54(void)

{
  return;
}




void FUN_0010190e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e49(void)

{
  return;
}




void FUN_00101aeb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101dba(void)

{
  return;
}




void FUN_0010198f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102079(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001019ba(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001019e5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a6a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d99(void)

{
  return;
}




void FUN_00101abd(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101dc5(void)

{
  return;
}




void FUN_00101ddb(void)

{
  return;
}




void FUN_00101a92(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e3e(void)

{
  return;
}




void FUN_00101e5f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102140(void)

{
  return;
}




void FUN_00101614(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00101d7f();
  if (iVar1 == 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101fe1(&DAT_00105020);
    if (iVar1 != 0) {
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if ((local_20 != 0) && (iVar1 = FUN_00101f63(local_20), iVar1 != 0)) {
        FUN_00101fbe(local_20);
      }
      if ((local_18 != 0) && (iVar1 = FUN_00101f63(local_18), iVar1 != 0)) {
        FUN_00101fbe(local_18);
      }
      FUN_00102098(DAT_00105020);
      FUN_001018e6(local_24);
    }
  }
  else {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    iVar1 = FUN_00101fe1(&DAT_00105020);
    if (iVar1 != 0) {
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = FUN_00101e96(FUN_001013e6,&local_24,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if ((local_20 != 0) && (iVar1 = FUN_00101f63(local_20), iVar1 != 0)) {
        FUN_00101fbe(local_20);
      }
      if ((local_18 != 0) && (iVar1 = FUN_00101f63(local_18), iVar1 != 0)) {
        FUN_00101fbe(local_18);
      }
      FUN_00102098(DAT_00105020);
      FUN_001018e6(local_24);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00101b7e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b1e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101d7f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018e6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101964(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101dfc(void)

{
  return;
}




void FUN_0010188e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102098(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e33(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00105008);
    }
    FUN_001012f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101df1(void)

{
  return;
}




void FUN_00101e07(void)

{
  return;
}




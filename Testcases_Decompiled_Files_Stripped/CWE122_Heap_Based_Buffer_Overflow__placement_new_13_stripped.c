
void FUN_00101cda(void)

{
  return;
}




void FUN_00101735(void)

{
  FUN_00101477();
  FUN_00101528();
  FUN_001015cb();
  FUN_00101687();
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101d32(void)

{
  return;
}




void FUN_00101fba(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




ulong FUN_00101abf(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001013c9(void)

{
  void *__ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(4);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_001030c8 == 5) {
      puVar2 = (undefined4 *)FUN_001017b9(8,__ptr);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_00101827(*puVar2);
      free(__ptr);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




int FUN_00101cc0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102010(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d48(void)

{
  return;
}




void FUN_00101d3d(void)

{
  return;
}




void FUN_00101951(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101a2c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ce5(void)

{
  return;
}




void FUN_00101d74(void)

{
  return;
}




bool FUN_00101ea4(pthread_t *param_1)

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




undefined8 FUN_00101f22(undefined8 *param_1)

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




void FUN_00101d95(void)

{
  return;
}




void FUN_001018a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102080(void)

{
  return;
}




void FUN_00101d8a(void)

{
  return;
}




void FUN_001018d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d53(void)

{
  return;
}




void FUN_0010187b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d27(void)

{
  return;
}




void FUN_00101da0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001019ab(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d11(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101d06(void)

{
  return;
}




void FUN_001017f5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101eff(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019d3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101528(void)

{
  void *__ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(4);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_001030c8 == 5) {
      puVar2 = (undefined4 *)FUN_001017b9(4,__ptr);
      *puVar2 = 5;
      FUN_00101827(*puVar2);
      free(__ptr);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101d5e(void)

{
  return;
}




void FUN_001015cb(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_28;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_001030c8 != 5) {
      FUN_001017cf("Benign, fixed string");
      pvVar1 = local_28;
    }
    local_28 = pvVar1;
    if (DAT_001030c8 == 5) {
      puVar2 = (undefined4 *)FUN_001017b9(8,local_28);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_00101827(*puVar2);
      free(local_28);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101687(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_001030c8 == 5) {
      puVar2 = (undefined4 *)FUN_001017b9(8,pvVar1);
      *puVar2 = 5;
      puVar2[1] = 10;
      FUN_00101827(*puVar2);
      free(pvVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




undefined8 FUN_00101754(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017cf("Calling good()...");
  FUN_00101735();
  FUN_001017cf("Finished good()");
  FUN_001017cf("Calling bad()...");
  FUN_001013c9();
  FUN_001017cf("Finished bad()");
  return 0;
}




void FUN_00101926(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017cf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001019fe(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a5f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001017b9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101cfb(void)

{
  return;
}




void FUN_00101fd9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d7f(void)

{
  return;
}




void FUN_0010184f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101827(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018fb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101477(void)

{
  void *__ptr;
  void *pvVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(4);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 != (void *)0x0) {
    if (DAT_001030c8 == 5) {
      puVar2 = (undefined4 *)FUN_001017b9(4,__ptr);
      *puVar2 = 5;
      FUN_00101827(*puVar2);
      free(__ptr);
    }
    else {
      FUN_001017cf("Benign, fixed string");
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




undefined8 FUN_00101ca2(void)

{
  return 1;
}




void FUN_00101f9b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d69(void)

{
  return;
}




void FUN_00101cf0(void)

{
  return;
}




void FUN_00101d1c(void)

{
  return;
}




ulong FUN_00101bc3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cb1(void)

{
  return 0;
}




undefined8 FUN_00101dd7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101da0,local_18);
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



